/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/ISURLBagObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, SUScriptDictionary, NSString;

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _bagDictionary;
	SUScriptDictionary* _scriptStoreBagDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(BOOL)arg2 ;
-(void)bagDidChange:(id)arg1 ;
-(id)scriptStoreBagDictionary;
@end

