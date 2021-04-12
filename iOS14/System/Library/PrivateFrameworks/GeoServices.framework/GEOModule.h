/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDModule, GEOModuleOptions;

@interface GEOModule : NSObject {

	GEOPDModule* _module;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) GEOModuleOptions * options; 
-(GEOModuleOptions *)options;
-(int)type;
-(id)initWithModule:(id)arg1 ;
@end

