/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class PHAsset;


@protocol MiroMediaItem <NSObject>
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHAsset * asset; 
@required
-(PHAsset *)asset;
-(double)duration;
-(double)startTime;

@end

