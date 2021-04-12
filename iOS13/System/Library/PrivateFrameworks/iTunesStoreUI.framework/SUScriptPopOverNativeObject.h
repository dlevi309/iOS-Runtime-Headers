/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {

	BOOL _redisplayAfterRotation;
	UIBarButtonItem* _sourceButtonItem;
	SUDOMElement* _sourceDOMElement;

}

@property (nonatomic,retain) UIBarButtonItem * sourceButtonItem;              //@synthesize sourceButtonItem=_sourceButtonItem - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceDOMElement;                 //@synthesize sourceDOMElement=_sourceDOMElement - In the implementation block
-(void)dealloc;
-(void)setSourceButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSourceDOMElement:(SUDOMElement *)arg1 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(SUDOMElement *)sourceDOMElement;
-(BOOL)_isAffectedByWindowNotification:(id)arg1 ;
-(UIBarButtonItem *)sourceButtonItem;
@end

