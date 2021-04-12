/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxBitmap : FxImage <NSCopying> {

	FxBitmapPriv* _bitmapPriv;

}
+(void)setGuaranteeMemoryCallback:(/*function pointer*/void*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)dataPtr;
-(unsigned long long)rowBytes;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(BOOL)_verifyImage;
-(unsigned long long)_packedRowBytes;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 andData:(void*)arg2 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA80)arg2 andRowBytes:(unsigned long long)arg3 ;
-(id)initWithCopy:(id)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 rowBytes:(unsigned long long)arg2 andData:(void*)arg3 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA80)arg2 ;
-(void*)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2 ;
-(BOOL)_ownsData;
-(void)_setOwnedDataPtr:(void*)arg1 ;
-(void)_setOwned:(BOOL)arg1 ;
@end

