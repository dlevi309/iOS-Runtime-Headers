/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptViewController, NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController * firstViewController; 
@property (retain) id minimumPaneSize; 
@property (retain) SUScriptViewController * secondViewController; 
@property (retain) id splitPosition; 
@property (retain) id splitShadowColor; 
@property (retain) NSNumber * splitShadowOpacity; 
@property (retain) NSNumber * splitShadowRadius; 
@property (retain) NSString * splitType; 
@property (retain) NSString * title; 
@property (assign) BOOL usesSharedPlaceholder; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(id)_splitViewController;
-(id)scriptAttributeKeys;
-(SUScriptViewController *)firstViewController;
-(id)newNativeViewController;
-(id)minimumPaneSize;
-(id)splitPosition;
-(BOOL)usesSharedPlaceholder;
-(void)setFirstViewController:(SUScriptViewController *)arg1 ;
-(void)setSecondViewController:(SUScriptViewController *)arg1 ;
-(void)setSplitPosition:(id)arg1 ;
-(void)setUsesSharedPlaceholder:(BOOL)arg1 ;
-(void)setMinimumPaneSize:(id)arg1 ;
-(SUScriptViewController *)secondViewController;
-(void)setSplitShadowColor:(id)arg1 ;
-(void)setSplitShadowOpacity:(NSNumber *)arg1 ;
-(void)setSplitShadowRadius:(NSNumber *)arg1 ;
-(void)setSplitType:(NSString *)arg1 ;
-(id)splitShadowColor;
-(NSNumber *)splitShadowOpacity;
-(NSNumber *)splitShadowRadius;
-(NSString *)splitType;
@end

