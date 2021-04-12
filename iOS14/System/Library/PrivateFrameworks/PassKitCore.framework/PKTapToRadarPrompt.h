/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding> {

	NSString* _reason;
	NSDate* _lastPromptDate;
	long long _promptCount;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSDate * lastPromptDate;              //@synthesize lastPromptDate=_lastPromptDate - In the implementation block
@property (assign,nonatomic) long long promptCount;              //@synthesize promptCount=_promptCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastPromptDate;
-(void)setLastPromptDate:(NSDate *)arg1 ;
-(long long)promptCount;
-(void)setPromptCount:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

