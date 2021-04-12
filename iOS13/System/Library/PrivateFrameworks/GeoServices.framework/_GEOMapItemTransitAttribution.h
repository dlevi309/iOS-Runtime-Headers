/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitAttribution.h>

@class NSArray, GEOPDTransitAttribution, NSString;

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {

	GEOPDTransitAttribution* _transitAttribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
-(id)initWithTransitAttribution:(id)arg1 ;
-(id)_providerNames;
@end

