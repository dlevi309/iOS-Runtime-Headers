/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData;

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying> {

	float _radius;
	float _softness;
	float _opacity;
	long long _pressureMode;
	SCD_Struct_NU8 _extent;
	NSMutableData* _data;

}

@property (nonatomic,readonly) float radius;                        //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) float softness;                      //@synthesize softness=_softness - In the implementation block
@property (nonatomic,readonly) float opacity;                       //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) long long pressureMode;              //@synthesize pressureMode=_pressureMode - In the implementation block
+(id)brushStrokeFromDictionary:(id)arg1 ;
+(id)dictionaryFromBrushStroke:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(SCD_Struct_NU8)extent;
-(long long)pointCount;
-(float)radius;
-(float)softness;
-(float)opacity;
-(id)points;
-(SCD_Struct_NU21)pointAtIndex:(long long)arg1 ;
-(void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(SCD_Struct_NU8)arg4 data:(id)arg5 pressureMode:(long long)arg6 ;
-(id)_createPointArrayFromData:(id)arg1 ;
-(id)_createDataFromPointArray:(id)arg1 ;
-(void)_updateExtent;
-(long long)pressureMode;
-(id)ciImageTiled:(BOOL)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
-(void)writeToTIFFAtPath:(id)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
@end

