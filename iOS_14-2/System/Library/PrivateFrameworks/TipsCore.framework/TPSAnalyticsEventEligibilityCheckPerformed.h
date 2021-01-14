/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent {

	NSString* _error;

}

@property (nonatomic,retain) NSString * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(id)_initWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

