/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recipientMap;
	NSMutableDictionary* _scoreMap;
	long long _version;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * recipientMap;              //@synthesize recipientMap=_recipientMap - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * scoreMap;                  //@synthesize scoreMap=_scoreMap - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)removeAllObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(NSMutableDictionary *)recipientMap;
-(NSMutableDictionary *)scoreMap;
-(void)updateWithContainer:(id)arg1 ;
@end

