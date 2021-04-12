/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, CLLocation, PHAdjustmentData, NSData, NSURL, NSString;

@interface PUEditingInitialPayload : NSObject <NSSecureCoding> {

	int _fullSizeImageExifOrientation;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	long long _playbackStyle;
	NSDate* _creationDate;
	CLLocation* _location;
	PHAdjustmentData* _adjustmentData;
	long long _adjustmentBaseVersion;
	NSData* _placeholderImageData;
	NSData* _displaySizeImageData;
	NSURL* _videoURL;
	NSString* _videoPathSandboxExtensionToken;
	NSURL* _fullSizeImageURL;
	NSString* _fullSizeImageURLSandboxExtensionToken;
	NSString* _uniformTypeIdentifier;
	SCD_Struct_PH4 _livePhotoStillDisplayTime;

}

@property (assign,nonatomic) long long mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaSubtypes;                            //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                     //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) CLLocation * location;                                         //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * adjustmentData;                           //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (assign,nonatomic) long long adjustmentBaseVersion;                             //@synthesize adjustmentBaseVersion=_adjustmentBaseVersion - In the implementation block
@property (nonatomic,copy) NSData * placeholderImageData;                                 //@synthesize placeholderImageData=_placeholderImageData - In the implementation block
@property (nonatomic,copy) NSData * displaySizeImageData;                                 //@synthesize displaySizeImageData=_displaySizeImageData - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSString * videoPathSandboxExtensionToken;                     //@synthesize videoPathSandboxExtensionToken=_videoPathSandboxExtensionToken - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 livePhotoStillDisplayTime;                    //@synthesize livePhotoStillDisplayTime=_livePhotoStillDisplayTime - In the implementation block
@property (nonatomic,retain) NSURL * fullSizeImageURL;                                    //@synthesize fullSizeImageURL=_fullSizeImageURL - In the implementation block
@property (nonatomic,copy) NSString * fullSizeImageURLSandboxExtensionToken;              //@synthesize fullSizeImageURLSandboxExtensionToken=_fullSizeImageURLSandboxExtensionToken - In the implementation block
@property (assign,nonatomic) int fullSizeImageExifOrientation;                            //@synthesize fullSizeImageExifOrientation=_fullSizeImageExifOrientation - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMediaType:(long long)arg1 ;
-(long long)adjustmentBaseVersion;
-(long long)mediaType;
-(NSURL *)fullSizeImageURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(CLLocation *)location;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setPlaybackStyle:(long long)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(void)setMediaSubtypes:(unsigned long long)arg1 ;
-(int)fullSizeImageExifOrientation;
-(NSString *)fullSizeImageURLSandboxExtensionToken;
-(NSString *)videoPathSandboxExtensionToken;
-(NSData *)displaySizeImageData;
-(SCD_Struct_PH4)livePhotoStillDisplayTime;
-(NSData *)placeholderImageData;
-(unsigned long long)mediaSubtypes;
-(void)setAdjustmentBaseVersion:(long long)arg1 ;
-(void)setPlaceholderImageData:(NSData *)arg1 ;
-(void)setDisplaySizeImageData:(NSData *)arg1 ;
-(void)setVideoPathSandboxExtensionToken:(NSString *)arg1 ;
-(void)setLivePhotoStillDisplayTime:(SCD_Struct_PH4)arg1 ;
-(void)setFullSizeImageURLSandboxExtensionToken:(NSString *)arg1 ;
-(void)setFullSizeImageExifOrientation:(int)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)videoURL;
@end

