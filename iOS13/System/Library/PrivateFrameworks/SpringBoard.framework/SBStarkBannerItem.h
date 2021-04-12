/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBUIBannerItem.h>

@protocol SBStarkNotificationsConfiguring;
@class NSHashTable, NSMutableSet, NSString, NSArray, NSDate, NSTimeZone;

@interface SBStarkBannerItem : SBUIBannerItem {

	id<SBStarkNotificationsConfiguring> _configuration;
	NSHashTable* _observers;
	NSMutableSet* _displayReasons;

}

@property (nonatomic,readonly) id<SBStarkNotificationsConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subTitle; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,readonly) NSArray * iconImages; 
@property (nonatomic,readonly) long long defaultActionType; 
@property (nonatomic,readonly) long long effectiveDefaultActionType; 
@property (nonatomic,readonly) NSDate * sourceDate; 
@property (getter=isSourceDateAllDay,nonatomic,readonly) BOOL sourceDateAllDay; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSArray * subActionLabels; 
-(id)init;
-(void)dealloc;
-(NSTimeZone *)timeZone;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)title;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)message;
-(id<SBStarkNotificationsConfiguring>)configuration;
-(NSArray *)iconImages;
-(NSString *)subTitle;
-(BOOL)shouldShowModalSubActions;
-(NSArray *)subActionLabels;
-(long long)defaultActionType;
-(void)reloadDisplayProperties;
-(BOOL)matchesContext:(id)arg1 ;
-(long long)effectiveDefaultActionType;
-(NSDate *)sourceDate;
-(BOOL)isSourceDateAllDay;
-(BOOL)isStarkBannerItem;
-(void)_callOrFaceTimeStateChanged;
-(BOOL)_inCallOrFaceTime;
-(/*^block*/id)ignoreAction;
@end

