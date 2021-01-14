/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSProgress, PLEditSource, PICompositionController, NSString, NSError, NSNumber;


@protocol PXEditSourceLoader <NSObject>
@property (nonatomic,readonly) NSProgress * progress; 
@property (nonatomic,readonly) PLEditSource * editSource; 
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource; 
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) PICompositionController * compositionController; 
@property (nonatomic,copy,readonly) PICompositionController * originalCompositionController; 
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier; 
@property (nonatomic,readonly) long long baseVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSNumber * loadDuration; 
@required
-(NSProgress *)progress;
-(PLEditSource *)activeEditSource;
-(PICompositionController *)originalCompositionController;
-(NSNumber *)loadDuration;
-(NSString *)contentIdentifier;
-(NSError *)error;
-(NSString *)livePhotoPairingIdentifier;
-(void)beginLoading;
-(long long)baseVersion;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;

@end

