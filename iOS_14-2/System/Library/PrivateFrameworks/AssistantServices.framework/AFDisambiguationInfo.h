/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <NSSecureCoding> {

	long long _version;
	NSArray* _history;

}

@property (nonatomic,readonly) long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * history;                //@synthesize history=_history - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)history;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHistory:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
@end

