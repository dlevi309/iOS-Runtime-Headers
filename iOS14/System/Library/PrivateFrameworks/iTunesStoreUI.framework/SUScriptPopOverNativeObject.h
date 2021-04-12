/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

