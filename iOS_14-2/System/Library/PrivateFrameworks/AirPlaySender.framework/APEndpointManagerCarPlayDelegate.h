/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

