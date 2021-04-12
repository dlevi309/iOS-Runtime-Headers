/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>

@interface FxHeliumImage : FxImage {

	FxHeliumImagePriv* _heliumImagePriv;

}
-(void)dealloc;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 ;
-(unsigned long long)imageType;
-(HGRef<HGNode>*)heliumRef;
-(void)setHeliumRef:(const HGRef<HGNode>*)arg1 ;
-(HGNode*)heliumNode;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 andHeliumRef:(const HGRef<HGNode>*)arg2 ;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 andHeliumNode:(HGNode*)arg2 ;
-(void)setHeliumNode:(HGNode*)arg1 ;
@end

