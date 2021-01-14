/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXElementInteraction.framework/AXElementInteraction
*/

#import <AXElementInteraction/AXElementInteraction-Structs.h>
#import <AXElementInteraction/AXUIClientDelegate.h>

@protocol AXElementInteractionManagerDelegate;
@class AXElement, AXUIClient, NSString;

@interface AXElementInteractionManager : NSObject <AXUIClientDelegate> {

	BOOL _interactionEnabled;
	AXElement* _focusedElement;
	AXObserverRef _axEventObserver;
	AXUIClient* _client;
	BOOL _displayCursor;
	id<AXElementInteractionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXElementInteractionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displayCursor;                                                   //@synthesize displayCursor=_displayCursor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id<AXElementInteractionManagerDelegate>)delegate;
-(void)setDelegate:(id<AXElementInteractionManagerDelegate>)arg1 ;
-(void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_clientIdentifier;
-(id)_client;
-(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setDisplayCursor:(BOOL)arg1 ;
-(void)_initializeAXObserver;
-(void)initializeFocus;
-(int)_registerForAXNotifications:(BOOL)arg1 ;
-(id)_allowDelegateToDecideElement:(id)arg1 ;
-(void)_highlightElement:(id)arg1 ;
-(BOOL)_moveFocusByHitTesting:(long long)arg1 ;
-(void)_moveToElement:(id)arg1 ;
-(void)startInteractionMode;
-(void)endInteractionMode;
-(void)_handleScreenChange;
-(void)_handleLayoutChange;
-(id)focusedElement;
-(BOOL)performDirectionalNavigation:(long long)arg1 ;
-(BOOL)performActivate;
-(BOOL)displayCursor;
@end

