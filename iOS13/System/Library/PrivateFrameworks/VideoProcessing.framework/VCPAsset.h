/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSDate, VCPFingerprint, NSString, NSURL;

@interface VCPAsset : NSObject

@property (nonatomic,readonly) BOOL isPano; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) BOOL isHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
@property (nonatomic,readonly) NSDictionary * exif; 
@property (nonatomic,readonly) BOOL hadFlash; 
@property (nonatomic,readonly) float exposureTimeSeconds; 
@property (nonatomic,readonly) float photoOffsetSeconds; 
@property (nonatomic,readonly) float originalPhotoOffsetSeconds; 
@property (nonatomic,readonly) BOOL isSlowmo; 
@property (nonatomic,readonly) BOOL isTimelapse; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float slowmoRate; 
@property (nonatomic,readonly) float timelapseRate; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) VCPFingerprint * fingerprint; 
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSURL * mainFileURL; 
+(void)unimplementedExceptionForMethodName:(id)arg1 ;
-(double)duration;
-(NSDate *)modificationDate;
-(long long)mediaType;
-(NSString *)localIdentifier;
-(BOOL)isImage;
-(BOOL)isMovie;
-(id)movie;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(NSURL *)mainFileURL;
-(VCPFingerprint *)fingerprint;
-(BOOL)isSlowmo;
-(BOOL)isLivePhoto;
-(BOOL)isTimelapse;
-(BOOL)isHDR;
-(BOOL)isSDOF;
-(unsigned long long)mediaSubtypes;
-(BOOL)isPano;
-(BOOL)isScreenshot;
-(NSDictionary *)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(BOOL)hadFlash;
-(float)exposureTimeSeconds;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(float)timelapseRate;
-(id)streamedMovie;
-(id)originalMovie;
@end

