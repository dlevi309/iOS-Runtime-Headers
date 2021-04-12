/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

