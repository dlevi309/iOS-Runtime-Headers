/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSNumber;

@interface TPSAnalyticsEventAppLeavesScreen : TPSAnalyticsEvent {

	NSNumber* _previouslyUnseenTipViews;
	NSNumber* _collectionViews;
	NSNumber* _tipViewsThisSession;

}

@property (nonatomic,readonly) NSNumber * previouslyUnseenTipViewsInThisSession; 
@property (nonatomic,readonly) NSNumber * collectionViews; 
@property (nonatomic,readonly) NSNumber * tipViewsInThisSession; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSNumber *)tipViewsInThisSession;
-(NSNumber *)previouslyUnseenTipViewsInThisSession;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)collectionViews;
-(id)mutableAnalyticsEventRepresentation;
@end

