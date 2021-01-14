/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitRoutingIncidentMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, GEOPBTransitRoutingIncidentMessage;

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding> {

	GEOPBTransitRoutingIncidentMessage* _routingIncidentMessage;
	NSArray* _transitIncidents;

}

@property (nonatomic,readonly) NSString * routingMessage; 
@property (nonatomic,readonly) NSArray * transitIncidents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_populateTransitIncidentsWithDecoderData:(id)arg1 ;
-(NSArray *)transitIncidents;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2 ;
-(NSString *)routingMessage;
-(id)initFakeLineIncidentMessageInLine:(id)arg1 ;
-(id)_fakeTransitLineIncidentInLine:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2 ;
@end

