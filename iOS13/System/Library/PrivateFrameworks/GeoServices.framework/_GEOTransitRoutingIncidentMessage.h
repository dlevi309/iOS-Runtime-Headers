/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitRoutingIncidentMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, GEOPBTransitRoutingIncidentMessage;

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding> {

	GEOPBTransitRoutingIncidentMessage* _routingIncidentMessage;
	NSArray* _transitIncidents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * routingMessage; 
@property (nonatomic,readonly) NSArray * transitIncidents; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2 ;
-(NSString *)routingMessage;
-(id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2 ;
-(NSArray *)transitIncidents;
-(void)_populateTransitIncidentsWithDecoderData:(id)arg1 ;
-(id)_fakeTransitLineIncidentInLine:(id)arg1 ;
-(id)initFakeLineIncidentMessageInLine:(id)arg1 ;
@end

