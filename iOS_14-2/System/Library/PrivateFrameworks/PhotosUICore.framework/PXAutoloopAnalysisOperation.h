/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@class NSDictionary, PLLivePhotoEditSource, NSProgress, NSError, NSNumber;

@interface PXAutoloopAnalysisOperation : NSOperation {

	NSDictionary* _recipesByVariationType;
	BOOL _succeeded;
	PLLivePhotoEditSource* _editSource;
	NSProgress* _progress;
	NSError* _error;
	NSNumber* _duration;
	NSDictionary* _analysisResult;

}

@property (nonatomic,readonly) PLLivePhotoEditSource * editSource;              //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                  //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDictionary * analysisResult;                   //@synthesize analysisResult=_analysisResult - In the implementation block
-(id)initWithEditSource:(id)arg1 ;
-(id)recipeForVariationType:(long long)arg1 ;
-(BOOL)succeeded;
-(NSProgress *)progress;
-(id)init;
-(NSError *)error;
-(void)main;
-(NSDictionary *)analysisResult;
-(NSNumber *)duration;
-(void)cancel;
-(void)_timeout;
-(PLLivePhotoEditSource *)editSource;
@end

