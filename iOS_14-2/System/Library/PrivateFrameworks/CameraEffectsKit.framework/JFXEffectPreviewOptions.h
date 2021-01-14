/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVColorSpace;

@interface JFXEffectPreviewOptions : NSObject <NSCopying> {

	unsigned _parentCode;
	unsigned long long _quality;
	PVColorSpace* _outputColorSpace;

}

@property (assign,nonatomic) unsigned long long quality;                   //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                          //@synthesize parentCode=_parentCode - In the implementation block
@property (nonatomic,retain) PVColorSpace * outputColorSpace;              //@synthesize outputColorSpace=_outputColorSpace - In the implementation block
-(unsigned long long)quality;
-(void)setQuality:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(void)setOutputColorSpace:(PVColorSpace *)arg1 ;
-(id)initPreviewOptions;
-(PVColorSpace *)outputColorSpace;
@end

