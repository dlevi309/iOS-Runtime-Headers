/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@protocol NFContactlessSessionDelegate;
@class NSDictionary, NFApplet, NSString;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {

	NSDictionary* _appletsById;
	id<NFContactlessSessionDelegate> _delegate;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;

}

@property (assign) id<NFContactlessSessionDelegate> delegate; 
@property (retain,readonly) NFApplet * activeApplet;                       //@synthesize activeApplet=_activeApplet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFContactlessSessionDelegate>)delegate;
-(id)appletWithIdentifier:(id)arg1 ;
-(void)didStartSession:(id)arg1 ;
-(void)setDelegate:(id<NFContactlessSessionDelegate>)arg1 ;
-(id)allApplets;
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(void)endSession;
-(void)didEndUnexpectedly;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(BOOL)setActiveApplet:(id)arg1 error:(id*)arg2 ;
-(BOOL)startCardEmulation:(id*)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(BOOL)setActiveApplet:(NFApplet *)arg1 ;
-(BOOL)startCardEmulation;
@end

