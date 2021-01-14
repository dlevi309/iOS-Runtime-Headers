/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>

@interface FxHeliumImage : FxImage {

	FxHeliumImagePriv* _heliumImagePriv;

}
-(id)initWithInfo:(SCD_Struct_PA83)arg1 ;
-(unsigned long long)imageType;
-(void)dealloc;
-(HGRef<HGNode>*)heliumRef;
-(void)setHeliumRef:(const HGRef<HGNode>*)arg1 ;
-(HGNode*)heliumNode;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 andHeliumRef:(const HGRef<HGNode>*)arg2 ;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 andHeliumNode:(HGNode*)arg2 ;
-(void)setHeliumNode:(HGNode*)arg1 ;
@end

