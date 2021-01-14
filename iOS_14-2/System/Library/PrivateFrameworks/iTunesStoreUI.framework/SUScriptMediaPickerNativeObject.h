/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
@end

