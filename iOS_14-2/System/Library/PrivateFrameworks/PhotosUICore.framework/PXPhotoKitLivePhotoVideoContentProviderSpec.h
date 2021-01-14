/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying> {

	BOOL _stabilizeIfPossible;
	SCD_Struct_PX8 _crossfadeDuration;
	SCD_Struct_PX8 _loopStartTime;
	SCD_Struct_PX9 _loopTimeRange;

}

@property (assign,nonatomic) SCD_Struct_PX8 crossfadeDuration;              //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 loopStartTime;                  //@synthesize loopStartTime=_loopStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 loopTimeRange;                  //@synthesize loopTimeRange=_loopTimeRange - In the implementation block
@property (assign,nonatomic) BOOL stabilizeIfPossible;                      //@synthesize stabilizeIfPossible=_stabilizeIfPossible - In the implementation block
-(id)init;
-(BOOL)stabilizeIfPossible;
-(SCD_Struct_PX8)loopStartTime;
-(void)setLoopStartTime:(SCD_Struct_PX8)arg1 ;
-(void)setStabilizeIfPossible:(BOOL)arg1 ;
-(void)setCrossfadeDuration:(SCD_Struct_PX8)arg1 ;
-(SCD_Struct_PX8)crossfadeDuration;
-(SCD_Struct_PX9)loopTimeRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLoopTimeRange:(SCD_Struct_PX9)arg1 ;
@end

