/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/APCarPlayPolicyMonitorDelegate.h>
#import <libobjc.A.dylib/APCarPlayPreferencesDelegate.h>

@class NSString;

@interface APEndpointManagerCarPlayDelegate : NSObject <APCarPlayPolicyMonitorDelegate, APCarPlayPreferencesDelegate> {

	OpaqueFigCFWeakReferenceHolderRef _weakManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithEndpointManager:(OpaqueFigEndpointManagerRef)arg1 ;
-(void)setEndpoint:(OpaqueFigEndpointRef)arg1 isAllowed:(BOOL)arg2 ;
-(void)setCarPlayEnabled:(BOOL)arg1 ;
@end

