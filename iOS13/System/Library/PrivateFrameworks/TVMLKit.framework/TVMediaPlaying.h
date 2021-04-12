/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

@class UIImage;


@protocol TVMediaPlaying <TVObservable>
@property (nonatomic,readonly) UIImage * coverImage; 
@property (nonatomic,readonly) BOOL isPlaying; 
@required
-(BOOL)isPlaying;
-(UIImage *)coverImage;

@end

