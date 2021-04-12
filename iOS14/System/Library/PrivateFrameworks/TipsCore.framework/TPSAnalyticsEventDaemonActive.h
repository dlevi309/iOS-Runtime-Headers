/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {

	BOOL _alreadyRunning;
	NSString* _reason;

}

@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithReason:(id)arg1 alreadyRunning:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(id)_initWithReason:(id)arg1 alreadyRunning:(BOOL)arg2 ;
-(NSString *)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

