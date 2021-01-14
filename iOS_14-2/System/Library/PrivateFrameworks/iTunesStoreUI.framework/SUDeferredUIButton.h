/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(CGRect)frame;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEnabled;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_saveImagesAsDeferred;
-(void)_saveTitlesAsDeferred;
@end

