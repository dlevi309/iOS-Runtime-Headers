/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libPPM.dylib
*/


#import <libPPM.dylib/libPPM.dylib-Structs.h>
@class PPMClientUserClientInterface, NSString;

@interface PPMClient : NSObject {

	unsigned connect;
	unsigned version;
	PPMClientUserClientInterface* userClient;
	NSString* identifier;

}

@property (retain) PPMClientUserClientInterface * userClient; 
@property (assign) unsigned connect; 
@property (retain) NSString * identifier; 
@property (assign) unsigned version; 
+(id)sharedInstanceWithClientRepresentation:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sharedInstanceWithClientRepresentation:(id)arg1 error:(id*)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)connect;
-(BOOL)endInteraction:(id*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)setupIOKitUserClientWith:(id)arg1 error:(id*)arg2 ;
-(void)setUserClient:(PPMClientUserClientInterface *)arg1 ;
-(int)getClientNumber:(id)arg1 ;
-(BOOL)registerForNotificationsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)initWithClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)admissionCheckWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)activityStoppedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)activityStartedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)pushTelemetryToPPM:(CFDictionaryRef)arg1 error:(id*)arg2 ;
-(PPMClientUserClientInterface *)userClient;
@end

