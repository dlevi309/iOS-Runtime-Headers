/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)aspect;
-(void)setAspect:(double)arg1 ;
-(void)setAvPreset:(NSString *)arg1 ;
-(NSString *)avPreset;
@end

