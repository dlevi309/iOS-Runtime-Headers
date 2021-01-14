/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class PXVideoContentProviderLoadingResult, NSNumber, NSString, NSDictionary;

@interface PXVideoContentProvider : PXObservable {

	PXVideoContentProviderLoadingResult* _loadingResult;
	double _loadingProgress;
	NSNumber* _videoAspectRatio;
	NSString* _contentIdentifier;

}

@property (nonatomic,retain) PXVideoContentProviderLoadingResult * loadingResult;              //@synthesize loadingResult=_loadingResult - In the implementation block
@property (assign,nonatomic) double loadingProgress;                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,retain) NSNumber * videoAspectRatio;                                      //@synthesize videoAspectRatio=_videoAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsPayload; 
-(void)cancelLoading;
-(NSDictionary *)analyticsPayload;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(NSString *)contentIdentifier;
-(NSNumber *)videoAspectRatio;
-(double)loadingProgress;
-(PXVideoContentProviderLoadingResult *)loadingResult;
-(void)setLoadingResult:(PXVideoContentProviderLoadingResult *)arg1 ;
-(id)mutableChangeObject;
-(void)setVideoAspectRatio:(NSNumber *)arg1 ;
-(void)setLoadingProgress:(double)arg1 ;
@end

