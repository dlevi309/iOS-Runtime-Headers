/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, SUScriptWindowContext, SUScriptCanvasFunction, SUScriptFunction, NSNumber, WebScriptObject, NSString;

@interface SUScriptWindow : SUScriptObject {

	SUScriptViewController* _backViewController;
	BOOL _canSwipeToDismiss;
	SUScriptWindowContext* _context;
	SUScriptViewController* _frontViewController;
	id _height;
	SUScriptCanvasFunction* _maskFunction;
	id _shadowOpacity;
	id _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	id _width;

}

@property (readonly) SUScriptWindowContext * context;                                  //@synthesize context=_context - In the implementation block
@property (copy) id canSwipeToDismiss; 
@property (retain) SUScriptViewController * backViewController; 
@property (retain) SUScriptViewController * frontViewController; 
@property (retain) NSNumber * height; 
@property (retain) WebScriptObject * maskFunction; 
@property (retain) NSNumber * shadowOpacity; 
@property (retain) NSNumber * shadowRadius; 
@property (retain) WebScriptObject * shouldDismissFunction; 
@property (readonly) NSString * style; 
@property (retain) NSNumber * width; 
@property (readonly) SUScriptViewController * windowParentViewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)dismissWindowsWithOptions:(id)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)show:(id)arg1 ;
-(NSNumber *)width;
-(NSNumber *)shadowRadius;
-(id)init;
-(NSNumber *)shadowOpacity;
-(void)setShadowRadius:(NSNumber *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)flip:(id)arg1 ;
-(void)setShadowOpacity:(NSNumber *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(NSNumber *)height;
-(SUScriptWindowContext *)context;
-(id)attributeKeys;
-(void)dismiss:(id)arg1 ;
-(id)_className;
-(id)canSwipeToDismiss;
-(NSString *)style;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)setBackViewController:(SUScriptViewController *)arg1 ;
-(void)_registerForOverlayNotifications;
-(id)_copySafeTransitionOptionsFromOptions:(id)arg1 ;
-(id)_backgroundViewController:(BOOL)arg1 ;
-(id)_overlayViewController:(BOOL)arg1 ;
-(id)_newOverlayTransitionWithOptions:(id)arg1 ;
-(void)setCanSwipeToDismiss:(id)arg1 ;
-(void)setFrontViewController:(SUScriptViewController *)arg1 ;
-(void)setShouldDismissFunction:(WebScriptObject *)arg1 ;
-(SUScriptViewController *)backViewController;
-(SUScriptViewController *)frontViewController;
-(CGSize)_overlaySize;
-(WebScriptObject *)shouldDismissFunction;
-(void)_overlayDidDismissNotification:(id)arg1 ;
-(void)_overlayDidFlipNotification:(id)arg1 ;
-(void)_overlayDidShowNotification:(id)arg1 ;
-(WebScriptObject *)maskFunction;
-(void)setMaskFunction:(WebScriptObject *)arg1 ;
-(SUScriptViewController *)windowParentViewController;
@end

