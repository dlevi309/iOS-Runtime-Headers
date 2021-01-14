/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxBitmap : FxImage <NSCopying> {

	FxBitmapPriv* _bitmapPriv;

}
+(void)setGuaranteeMemoryCallback:(/*function pointer*/void*)arg1 ;
-(void*)dataPtr;
-(id)init;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(unsigned long long)rowBytes;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)_verifyImage;
-(unsigned long long)_packedRowBytes;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 andData:(void*)arg2 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA83)arg2 andRowBytes:(unsigned long long)arg3 ;
-(id)initWithCopy:(id)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 rowBytes:(unsigned long long)arg2 andData:(void*)arg3 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA83)arg2 ;
-(void*)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2 ;
-(BOOL)_ownsData;
-(void)_setOwnedDataPtr:(void*)arg1 ;
-(void)_setOwned:(BOOL)arg1 ;
@end

