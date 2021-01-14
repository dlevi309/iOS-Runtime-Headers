/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateEndpointsMessage : MRProtocolMessage {

	NSArray* _endpoints;

}

@property (nonatomic,readonly) NSArray * externalEndpoints; 
@property (nonatomic,readonly) NSArray * externalOutputDevices; 
@property (nonatomic,readonly) NSArray * endpoints; 
@property (nonatomic,readonly) unsigned features; 
-(NSArray *)endpoints;
-(unsigned)features;
-(id)initWithEndpoints:(id)arg1 endpointFeature:(unsigned)arg2 ;
-(unsigned long long)type;
-(NSArray *)externalEndpoints;
-(NSArray *)externalOutputDevices;
@end

