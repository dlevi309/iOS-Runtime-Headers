/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface NUAuxiliaryImageRenderRequest : NURenderRequest {

	long long _auxiliaryImageType;

}

@property (assign) long long auxiliaryImageType;              //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
+(CGImageRef)createGainMapForComposition:(id)arg1 ;
-(void)setAuxiliaryImageType:(long long)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)submitSynchronous:(out id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)auxiliaryImageType;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

