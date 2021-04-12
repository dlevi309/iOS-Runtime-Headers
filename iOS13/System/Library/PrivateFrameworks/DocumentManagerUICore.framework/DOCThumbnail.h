/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

@class UIImage;


@protocol DOCThumbnail <NSObject>
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@required
-(BOOL)isLoading;
-(UIImage *)thumbnail;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;

@end

