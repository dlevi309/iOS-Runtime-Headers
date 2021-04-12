/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSMutableDictionary, NSDictionary;

@interface PIExportImageMetadataBuilder : PIExportMetadataBuilder {

	NSMutableDictionary* _iptcMutableDictionary;
	NSMutableDictionary* _exifMutableDictionary;
	NSMutableDictionary* _tiffMutableDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * iptcMutableDictionary;              //@synthesize iptcMutableDictionary=_iptcMutableDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exifMutableDictionary;              //@synthesize exifMutableDictionary=_exifMutableDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tiffMutableDictionary;              //@synthesize tiffMutableDictionary=_tiffMutableDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * iptcDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * exifDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * tiffDictionary; 
+(id)_dateFormatterTemplate;
+(id)_gpsTimeFormatter;
+(id)_gpsDateFormatter;
+(id)gpsDictionaryForLocation:(id)arg1 ;
+(id)_exifDateTimeFormatter;
+(id)_exifSubsecTimeFormatter;
+(id)_exifTimeZoneOffsetFormatter;
+(id)iptcTimeFormatter;
+(id)iptcDateFormatter;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setKeywords:(id)arg1 ;
-(void)setCaption:(id)arg1 ;
-(void)setPeopleNames:(id)arg1 ;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2 ;
-(void)_updateCreationDate;
-(NSDictionary *)iptcDictionary;
-(NSDictionary *)exifDictionary;
-(NSDictionary *)tiffDictionary;
-(NSMutableDictionary *)iptcMutableDictionary;
-(void)setIptcMutableDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)exifMutableDictionary;
-(void)setExifMutableDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tiffMutableDictionary;
-(void)setTiffMutableDictionary:(NSMutableDictionary *)arg1 ;
@end

