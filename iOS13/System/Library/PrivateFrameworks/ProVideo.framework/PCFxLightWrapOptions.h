/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PCFxBlendOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying> {

	float _amount;
	float _intensity;
	float _lrOpacity;
	int _lrMode;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIntensity:(float)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setAmount:(float)arg1 ;
-(void)setLRBlendMode:(int)arg1 ;
-(float)getAmount;
-(float)getIntensity;
-(float)getOpacity;
-(int)getLRBlendMode;
-(id)initWithLRBlendOptions:(id)arg1 ;
@end

