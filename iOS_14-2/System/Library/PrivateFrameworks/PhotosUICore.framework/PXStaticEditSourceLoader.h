/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXEditSourceLoader.h>

@class NSProgress, PLEditSource, PICompositionController, NSString, NSError, NSNumber;

@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader> {

	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	PICompositionController* _compositionController;
	PICompositionController* _originalCompositionController;
	long long _baseVersion;
	NSProgress* _progress;
	NSError* _error;
	NSString* _contentIdentifier;
	NSString* _livePhotoPairingIdentifier;

}

@property (nonatomic,readonly) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) PLEditSource * editSource;                                                 //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource;                                      //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) PICompositionController * compositionController;                      //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * originalCompositionController;              //@synthesize originalCompositionController=_originalCompositionController - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;                                //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) long long baseVersion;                                                     //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;                                         //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * loadDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(PICompositionController *)originalCompositionController;
-(NSNumber *)loadDuration;
-(NSString *)contentIdentifier;
-(NSError *)error;
-(NSString *)livePhotoPairingIdentifier;
-(id)initWithEditSource:(id)arg1 compositionController:(id)arg2 baseVersion:(long long)arg3 contentIdentifier:(id)arg4 ;
-(void)beginLoading;
-(long long)baseVersion;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
@end

