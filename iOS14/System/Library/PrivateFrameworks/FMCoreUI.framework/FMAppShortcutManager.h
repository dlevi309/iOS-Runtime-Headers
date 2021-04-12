/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/


@interface FMAppShortcutManager : NSObject

@property (readonly) BOOL hasShortcutItems; 
+(id)sharedInstance;
-(void)setShortcutItems:(id)arg1 ;
-(void)setShortcutItem:(id)arg1 ;
-(id)createShortcutForItem:(id)arg1 ;
-(BOOL)hasShortcutItems;
-(void)removeShortcutItemWithIentifier:(id)arg1 ;
-(void)clearShortcutItems;
@end

