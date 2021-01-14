/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoMetadata <NSObject>
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) double time; 
@property (readonly,nonatomic) double framerate; 
@property (readonly,nonatomic) double timePlayed; 
@property (readonly,nonatomic) BOOL muted; 
@property (readonly,nonatomic) double volume; 
@property (readonly,nonatomic) CGSize naturalSize; 
@required
-(double)time;
-(CGSize)naturalSize;
-(double)timePlayed;
-(double)framerate;
-(double)volume;
-(double)duration;
-(BOOL)muted;

@end

