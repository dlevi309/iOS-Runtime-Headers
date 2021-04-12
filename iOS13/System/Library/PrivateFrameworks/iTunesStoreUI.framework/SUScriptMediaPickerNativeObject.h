/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewControllerNativeObject.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@class NSString;

@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject <MPMediaPickerControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
@end

