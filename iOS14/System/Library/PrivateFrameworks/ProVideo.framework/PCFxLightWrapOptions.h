/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIntensity:(float)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setAmount:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLRBlendMode:(int)arg1 ;
-(float)getAmount;
-(float)getIntensity;
-(float)getOpacity;
-(int)getLRBlendMode;
-(id)initWithLRBlendOptions:(id)arg1 ;
@end

