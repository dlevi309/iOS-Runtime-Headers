/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSURL, NSString, CLLocation, NSDate, PFAssetAdjustments;

@interface PFPhotoSharingOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _externalIsolation;
	NSError* _operationError;
	BOOL _operationComplete;
	BOOL _operationSuccess;
	BOOL _shouldStripLocation;
	BOOL _shouldStripCaption;
	BOOL _shouldStripAccessibilityDescription;
	BOOL _shouldConvertToSRGB;
	BOOL _shouldStripMetadata;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customCaption;
	NSString* _customAccessibilityLabel;
	NSURL* _imageURL;
	NSURL* _resultingFileURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setImageURL:,nonatomic,copy) NSURL * imageURL;                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                                              //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                                                      //@synthesize customDate=_customDate - In the implementation block
@property (assign,nonatomic) BOOL shouldStripCaption;                                                //@synthesize shouldStripCaption=_shouldStripCaption - In the implementation block
@property (nonatomic,copy) NSString * customCaption;                                                 //@synthesize customCaption=_customCaption - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAccessibilityDescription;                               //@synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                                               //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,copy,readonly) NSURL * resultingFileURL;                                        //@synthesize resultingFileURL=_resultingFileURL - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
+(BOOL)outputSupportedForTypeIdentifier:(CFStringRef)arg1 ;
+(id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2 ;
-(BOOL)success;
-(NSError *)operationError;
-(void)setOutputFilename:(NSString *)arg1 ;
-(float)progress;
-(void)main;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripCaption;
-(void)setShouldStripCaption:(BOOL)arg1 ;
-(BOOL)shouldStripAccessibilityDescription;
-(void)setShouldStripAccessibilityDescription:(BOOL)arg1 ;
-(void)_setImageURL:(id)arg1 ;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(void)setCustomCaption:(NSString *)arg1 ;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(NSURL *)imageURL;
-(NSString *)outputFilename;
-(PFAssetAdjustments *)_adjustments;
-(id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2 ;
-(NSURL *)outputDirectoryURL;
-(CLLocation *)customLocation;
-(NSString *)customCaption;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(BOOL)shouldConvertToSRGB;
-(NSDate *)customDate;
-(void)setCustomDate:(NSDate *)arg1 ;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(NSURL *)resultingFileURL;
-(void)_setAdjustments:(id)arg1 ;
@end

