/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString;

@interface VEKExportPreset : NSObject {

	NSString* _avPreset;
	double _aspect;

}

@property (nonatomic,retain) NSString * avPreset;              //@synthesize avPreset=_avPreset - In the implementation block
@property (assign,nonatomic) double aspect;                    //@synthesize aspect=_aspect - In the implementation block
+(id)presetWithAVPreset:(id)arg1 ;
-(void)setAspect:(double)arg1 ;
-(double)aspect;
-(void)setAvPreset:(NSString *)arg1 ;
-(NSString *)avPreset;
@end

