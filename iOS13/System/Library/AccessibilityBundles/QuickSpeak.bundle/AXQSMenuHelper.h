/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
*/


@class NSArray, UIMenuController, UICalloutBar;

@interface AXQSMenuHelper : NSObject {

	BOOL _showingLanguageChoices;
	NSArray* _thirdPartyMenuItems;

}

@property (nonatomic,retain) NSArray * thirdPartyMenuItems;                                            //@synthesize thirdPartyMenuItems=_thirdPartyMenuItems - In the implementation block
@property (nonatomic,readonly) UIMenuController * menuController; 
@property (nonatomic,readonly) UICalloutBar * calloutBar; 
@property (assign,getter=isShowingLanguageChoices,nonatomic) BOOL showingLanguageChoices;              //@synthesize showingLanguageChoices=_showingLanguageChoices - In the implementation block
+(id)sharedInstance;
-(UICalloutBar *)calloutBar;
-(void)restoreMenu;
-(id)menuItemForCalloutBarButton:(id)arg1 ;
-(void)saveThirdPartyMenuItemsIfNeeded:(id)arg1 ;
-(void)setShowingLanguageChoices:(BOOL)arg1 ;
-(BOOL)isShowingLanguageChoices;
-(NSArray *)thirdPartyMenuItems;
-(UIMenuController *)menuController;
-(void)setThirdPartyMenuItems:(NSArray *)arg1 ;
@end

