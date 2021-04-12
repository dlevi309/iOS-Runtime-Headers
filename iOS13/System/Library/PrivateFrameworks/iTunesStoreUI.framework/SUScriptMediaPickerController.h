/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController

@property (assign) BOOL allowsPickingMultipleItems; 
@property (readonly) NSArray * mediaTypes; 
@property (retain) NSString * prompt; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)_className;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSArray *)mediaTypes;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(id)attributeKeys;
-(BOOL)allowsPickingMultipleItems;
-(id)initWithMediaTypes:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)setNativeViewController:(id)arg1 ;
-(id)newNativeViewController;
@end

