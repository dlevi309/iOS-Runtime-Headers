/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSNumber, NSPointerArray;

@interface VUIInAppMessagingRegistry : NSObject {

	NSNumber* _hasFavoriteTeams;
	NSPointerArray* _buttonViews;

}

@property (nonatomic,retain) NSPointerArray * buttonViews;               //@synthesize buttonViews=_buttonViews - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveButtons; 
@property (nonatomic,readonly) NSNumber * hasFavoriteTeams;              //@synthesize hasFavoriteTeams=_hasFavoriteTeams - In the implementation block
+(id)sharedInstance;
-(NSPointerArray *)buttonViews;
-(id)init;
-(void)setButtonViews:(NSPointerArray *)arg1 ;
-(void)registerHasFavorites:(BOOL)arg1 ;
-(BOOL)_hasActiveButtonsNoLock;
-(void)_notifyButtonsChanged;
-(void)_notifyButtonsChangedAction;
-(BOOL)hasActiveButtons;
-(void)registerDownloadButton:(id)arg1 ;
-(void)unRegisterDownloadButton:(id)arg1 ;
-(NSNumber *)hasFavoriteTeams;
@end

