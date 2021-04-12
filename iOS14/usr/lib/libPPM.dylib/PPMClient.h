/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstanceWithClientRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)sharedInstanceWithClientRepresentation:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(int)getClientNumber:(id)arg1 ;
-(BOOL)initWithClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)activityStoppedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(PPMClientUserClientInterface *)userClient;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)endInteraction:(id*)arg1 ;
-(unsigned)connect;
-(BOOL)registerForNotificationsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(void)setUserClient:(PPMClientUserClientInterface *)arg1 ;
-(BOOL)pushTelemetryToPPM:(CFDictionaryRef)arg1 error:(id*)arg2 ;
-(BOOL)setupIOKitUserClientWith:(id)arg1 error:(id*)arg2 ;
-(BOOL)admissionCheckWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)activityStartedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned)version;
@end

