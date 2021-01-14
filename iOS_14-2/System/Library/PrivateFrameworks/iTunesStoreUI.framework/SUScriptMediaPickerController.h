/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(id)attributeKeys;
-(BOOL)allowsPickingMultipleItems;
-(id)initWithMediaTypes:(id)arg1 ;
-(NSArray *)mediaTypes;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(id)_className;
-(id)scriptAttributeKeys;
-(void)setNativeViewController:(id)arg1 ;
-(id)newNativeViewController;
@end

