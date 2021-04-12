/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SUActivityDelegate.h>

@class NSString;

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(BOOL)activity:(id)arg1 canPerformWithActivityItems:(id)arg2 ;
-(void)activity:(id)arg1 prepareWithActivityItems:(id)arg2 ;
-(void)performActionForActivity:(id)arg1 ;
@end

