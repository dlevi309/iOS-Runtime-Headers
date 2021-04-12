/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEKeyer.h>

@class NSDictionary;

@interface PAELumaKeyer : PAEKeyer {

	NSDictionary* properties;

}
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)oscIsPublishable;
-(void)createLutForNode:(HGNode*)arg1 input:(int)arg2 rect:(const HGRect*)arg3 omKeyer:(PAEKeyerOMKeyer2D*)arg4 ;
-(BOOL)isLumaKey;
@end

