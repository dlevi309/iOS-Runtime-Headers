/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOResource, NSArray, NSString, NSData;

@interface GEOResourceInfo : NSObject {

	GEOResource* _resource;
	NSArray* _equivalentResources;
	BOOL _allowResumingPartialDownload;

}

@property (assign,setter=_setAllowResumingPartialDownload:,getter=_allowResumingPartialDownload,nonatomic) BOOL allowResumingPartialDownload;              //@synthesize allowResumingPartialDownload=_allowResumingPartialDownload - In the implementation block
@property (nonatomic,copy) NSArray * equivalentResources;                                                                                                  //@synthesize equivalentResources=_equivalentResources - In the implementation block
@property (nonatomic,readonly) GEOResource * resource;                                                                                                     //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSData * checksum; 
-(id)description;
-(NSString *)name;
-(int)type;
-(NSData *)checksum;
-(id)initWithResource:(id)arg1 ;
-(void)setEquivalentResources:(NSArray *)arg1 ;
-(GEOResource *)resource;
-(NSArray *)equivalentResources;
-(BOOL)_allowResumingPartialDownload;
-(void)_setAllowResumingPartialDownload:(BOOL)arg1 ;
@end

