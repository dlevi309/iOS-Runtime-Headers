/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/ISSingleton.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton> {

	NSMutableArray* _dialogs;

}

@property (nonatomic,readonly) long long numberOfPendingDialogs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
+(id)newDialogWithError:(id)arg1 ;
-(BOOL)presentDialog:(id)arg1 ;
-(void)dealloc;
-(BOOL)presentDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(long long)numberOfPendingDialogs;
-(void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(BOOL)_isDisplayingEquivalentDialog:(id)arg1 ;
-(void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 ;
@end

