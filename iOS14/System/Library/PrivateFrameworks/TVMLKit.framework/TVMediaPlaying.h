/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

