/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@class NSDictionary, NFWeakReference, NFApplet, NSString;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {

	NSDictionary* _appletsById;
	NFWeakReference* _delegate;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;

}

@property (assign) id<NFContactlessSessionDelegate> delegate; 
@property (readonly) NFApplet * activeApplet;                              //@synthesize activeApplet=_activeApplet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NFContactlessSessionDelegate>)delegate;
-(void)setDelegate:(id<NFContactlessSessionDelegate>)arg1 ;
-(void)endSession;
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(id)appletWithIdentifier:(id)arg1 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)allApplets;
-(void)didStartSession:(id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didEndUnexpectedly;
-(BOOL)setActiveApplet:(id)arg1 error:(id*)arg2 ;
-(BOOL)startCardEmulation:(id*)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(BOOL)setActiveApplet:(NFApplet *)arg1 ;
-(BOOL)startCardEmulation;
@end

