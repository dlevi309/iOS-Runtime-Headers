/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _shouldConvertToSRGB;
	BOOL _shouldStripMetadata;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	CLLocation* _customLocation;
	NSDate* _customDate;
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
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                                               //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,copy,readonly) NSURL * resultingFileURL;                                        //@synthesize resultingFileURL=_resultingFileURL - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
+(BOOL)outputSupportedForTypeIdentifier:(CFStringRef)arg1 ;
+(id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2 ;
-(void)main;
-(float)progress;
-(BOOL)success;
-(NSError *)operationError;
-(NSURL *)imageURL;
-(void)setOutputFilename:(NSString *)arg1 ;
-(PFAssetAdjustments *)_adjustments;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(void)setCustomDate:(NSDate *)arg1 ;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)outputFilename;
-(NSString *)customAccessibilityLabel;
-(id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2 ;
-(NSURL *)outputDirectoryURL;
-(CLLocation *)customLocation;
-(BOOL)shouldConvertToSRGB;
-(NSDate *)customDate;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(void)_setImageURL:(id)arg1 ;
-(NSURL *)resultingFileURL;
-(void)_setAdjustments:(id)arg1 ;
@end

