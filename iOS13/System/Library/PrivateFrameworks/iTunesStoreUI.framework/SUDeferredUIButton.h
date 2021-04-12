/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {

	BOOL _deferredEnabled;
	CGRect _deferredFrame;
	NSMutableDictionary* _deferredImages;
	NSMutableDictionary* _deferredTitles;
	BOOL _isDeferringInterfaceUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_saveImagesAsDeferred;
-(void)_saveTitlesAsDeferred;
@end

