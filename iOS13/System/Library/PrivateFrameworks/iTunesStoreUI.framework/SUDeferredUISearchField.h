/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UISearchField.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {

	long long _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
-(void)dealloc;
-(CGRect)frame;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(void)setClearButtonMode:(long long)arg1 ;
-(float)paddingLeft;
-(float)paddingTop;
-(long long)clearButtonMode;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
@end

