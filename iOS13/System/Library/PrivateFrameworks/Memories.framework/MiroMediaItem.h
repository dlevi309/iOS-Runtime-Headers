/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class PHAsset;


@protocol MiroMediaItem <NSObject>
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHAsset * asset; 
@required
-(double)duration;
-(PHAsset *)asset;
-(double)startTime;

@end

