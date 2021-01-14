/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)recipientMap;
-(void)updateWithContainer:(id)arg1 ;
-(NSMutableDictionary *)scoreMap;
-(void)removeAllObjects;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
@end

