/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent {

	BOOL _animationFinished;
	BOOL _seenThisContentBefore;
	double _timeOnScreen;
	double _animationLoadTime;
	NSString* _contentID;
	NSString* _collectionID;
	NSString* _viewMethod;
	NSString* _viewMode;
	NSString* _contentStyle;
	NSString* _widgetType;

}

@property (assign,nonatomic) double timeOnScreen;                         //@synthesize timeOnScreen=_timeOnScreen - In the implementation block
@property (assign,nonatomic) double animationLoadTime;                    //@synthesize animationLoadTime=_animationLoadTime - In the implementation block
@property (assign,nonatomic) BOOL animationFinished;                      //@synthesize animationFinished=_animationFinished - In the implementation block
@property (assign,nonatomic) BOOL seenThisContentBefore;                  //@synthesize seenThisContentBefore=_seenThisContentBefore - In the implementation block
@property (nonatomic,retain) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                     //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * sessionViewNumber; 
@property (nonatomic,retain) NSString * viewMethod;                       //@synthesize viewMethod=_viewMethod - In the implementation block
@property (nonatomic,retain) NSString * viewMode;                         //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) NSString * contentStyle;                     //@synthesize contentStyle=_contentStyle - In the implementation block
@property (nonatomic,retain) NSString * widgetType;                       //@synthesize widgetType=_widgetType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)resetSessionViewNumber;
+(BOOL)updateSessionViewNumber;
+(void)incrementSessionViewNumberForKey:(id)arg1 ;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 widgetType:(id)arg3 ;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 viewMethod:(id)arg3 contentStyle:(id)arg4 viewMode:(id)arg5 timeOnScreen:(double)arg6 animationLoadTime:(double)arg7 animationFinished:(BOOL)arg8 seenThisContentBefore:(BOOL)arg9 ;
-(void)log;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(NSString *)collectionID;
-(void)setContentID:(NSString *)arg1 ;
-(void)setViewMode:(NSString *)arg1 ;
-(NSString *)viewMode;
-(void)setViewMethod:(NSString *)arg1 ;
-(NSString *)viewMethod;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 widgetType:(id)arg3 ;
-(NSNumber *)sessionViewNumber;
-(double)timeOnScreen;
-(void)setTimeOnScreen:(double)arg1 ;
-(NSString *)widgetType;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 viewMethod:(id)arg3 contentStyle:(id)arg4 viewMode:(id)arg5 timeOnScreen:(double)arg6 animationLoadTime:(double)arg7 animationFinished:(BOOL)arg8 seenThisContentBefore:(BOOL)arg9 ;
-(double)animationLoadTime;
-(void)setAnimationLoadTime:(double)arg1 ;
-(BOOL)animationFinished;
-(void)setAnimationFinished:(BOOL)arg1 ;
-(BOOL)seenThisContentBefore;
-(void)setSeenThisContentBefore:(BOOL)arg1 ;
-(NSString *)contentStyle;
-(void)setContentStyle:(NSString *)arg1 ;
-(void)setWidgetType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(BOOL)isWidget;
-(id)mutableAnalyticsEventRepresentation;
@end

