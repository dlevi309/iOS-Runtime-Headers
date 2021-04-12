/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSDictionary * scenes; 
+(void)unimplementedExceptionForMethodName:(id)arg1 ;
-(NSDate *)modificationDate;
-(NSDictionary *)scenes;
-(VCPFingerprint *)fingerprint;
-(NSString *)localIdentifier;
-(id)movie;
-(NSDictionary *)exif;
-(long long)mediaType;
-(BOOL)isPano;
-(BOOL)isTimelapse;
-(BOOL)isLivePhoto;
-(NSURL *)mainFileURL;
-(BOOL)isImage;
-(BOOL)isMovie;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(BOOL)isScreenshot;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)exposureTimeSeconds;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(BOOL)isSlowmo;
-(float)slowmoRate;
-(float)timelapseRate;
-(id)streamedMovie;
-(id)originalMovie;
-(CGSize)originalMovieSize;
-(BOOL)isHDR;
-(BOOL)hadFlash;
-(double)duration;
-(BOOL)isSDOF;
-(id)typeDescription;
-(unsigned long long)pixelWidth;
@end

