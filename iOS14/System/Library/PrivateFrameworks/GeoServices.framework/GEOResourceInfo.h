/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOResource, NSArray, NSString, NSData;

@interface GEOResourceInfo : NSObject {

	GEOResource* _resource;
	NSArray* _equivalentResources;
	BOOL _allowResumingPartialDownload;
	NSString* _eTag;

}

@property (assign,setter=_setAllowResumingPartialDownload:,getter=_allowResumingPartialDownload,nonatomic) BOOL allowResumingPartialDownload;              //@synthesize allowResumingPartialDownload=_allowResumingPartialDownload - In the implementation block
@property (nonatomic,copy) NSArray * equivalentResources;                                                                                                  //@synthesize equivalentResources=_equivalentResources - In the implementation block
@property (nonatomic,readonly) GEOResource * resource;                                                                                                     //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) int validationMethod; 
@property (nonatomic,copy) NSString * eTag;                                                                                                                //@synthesize eTag=_eTag - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSData * checksum; 
-(NSArray *)equivalentResources;
-(void)setEquivalentResources:(NSArray *)arg1 ;
-(BOOL)validateResource:(id)arg1 log:(id)arg2 ;
-(BOOL)validateResourceAtPath:(id)arg1 useExtendedAttrs:(BOOL)arg2 log:(id)arg3 ;
-(NSString *)name;
-(BOOL)shouldCheckForUpdateForResourceAtPath:(id)arg1 useExtendedAttrs:(BOOL)arg2 forceUpdateCheck:(BOOL)arg3 log:(id)arg4 ;
-(BOOL)_allowResumingPartialDownload;
-(id)description;
-(GEOResource *)resource;
-(void)setETag:(NSString *)arg1 ;
-(int)type;
-(void)_setAllowResumingPartialDownload:(BOOL)arg1 ;
-(id)initWithResource:(id)arg1 ;
-(NSString *)eTag;
-(int)validationMethod;
-(NSData *)checksum;
@end

