/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSDate, NSString, NSURL;

@interface PFSharingRemakerOptions : NSObject <NSCopying> {

	BOOL _shouldStripLocation;
	BOOL _shouldStripAllMetadata;
	BOOL _shouldConvertToSRGB;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customAccessibilityLabel;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	NSString* _exportPreset;
	NSString* _exportFileType;

}

@property (assign,nonatomic) BOOL shouldStripLocation;                       //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAllMetadata;                    //@synthesize shouldStripAllMetadata=_shouldStripAllMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                       //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                      //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                              //@synthesize customDate=_customDate - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;              //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (nonatomic,copy) NSURL * outputDirectoryURL;                       //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                        //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * exportPreset;                          //@synthesize exportPreset=_exportPreset - In the implementation block
@property (nonatomic,copy) NSString * exportFileType;                        //@synthesize exportFileType=_exportFileType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(void)setCustomDate:(NSDate *)arg1 ;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(void)setExportFileType:(NSString *)arg1 ;
-(void)setExportPreset:(NSString *)arg1 ;
-(NSString *)exportPreset;
-(NSString *)outputFilename;
-(NSString *)customAccessibilityLabel;
-(NSURL *)outputDirectoryURL;
-(CLLocation *)customLocation;
-(BOOL)shouldConvertToSRGB;
-(NSDate *)customDate;
-(BOOL)shouldStripAllMetadata;
-(void)setShouldStripAllMetadata:(BOOL)arg1 ;
-(NSString *)exportFileType;
@end

