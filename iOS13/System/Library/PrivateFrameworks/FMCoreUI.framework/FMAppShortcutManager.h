/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/


@interface FMAppShortcutManager : NSObject

@property (readonly) BOOL hasShortcutItems; 
+(id)sharedInstance;
-(void)setShortcutItems:(id)arg1 ;
-(id)createShortcutForItem:(id)arg1 ;
-(BOOL)hasShortcutItems;
-(void)setShortcutItem:(id)arg1 ;
-(void)removeShortcutItemWithIentifier:(id)arg1 ;
-(void)clearShortcutItems;
@end

