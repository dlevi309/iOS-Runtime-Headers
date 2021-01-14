/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

@class UIImage;


@protocol DOCThumbnail <NSObject>
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@required
-(void)addListener:(id)arg1;
-(UIImage *)thumbnail;
-(BOOL)isLoading;
-(void)removeListener:(id)arg1;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(id)averageColorInRect:(CGRect)arg1;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;

@end

