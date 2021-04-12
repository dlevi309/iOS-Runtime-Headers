/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PFMetadataBuilder.h>

@class NSMutableDictionary, NSDictionary;

@interface PFImageMetadataBuilder : PFMetadataBuilder {

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
+(id)_exifTimeZoneOffsetFormatter;
+(id)_exifSubsecTimeFormatter;
+(id)_exifDateTimeFormatter;
+(id)iptcTimeFormatter;
+(id)iptcDateFormatter;
+(id)_dateFormatterTemplate;
+(id)_gpsTimeFormatter;
+(id)_gpsDateFormatter;
-(void)setCaption:(id)arg1 ;
-(void)setKeywords:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setPeopleNames:(id)arg1 ;
-(void)setAccessibilityDescription:(id)arg1 ;
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

