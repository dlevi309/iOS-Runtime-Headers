/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitAttribution.h>

@class NSArray, GEOPDTransitAttribution, NSString;

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {

	GEOPDTransitAttribution* _transitAttribution;

}

@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_providerNames;
-(id)initWithTransitAttribution:(id)arg1 ;
@end

