/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface NUAuxiliaryImageRenderRequest : NURenderRequest {

	long long _auxiliaryImageType;

}

@property (assign) long long auxiliaryImageType;              //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)auxiliaryImageType;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(void)setAuxiliaryImageType:(long long)arg1 ;
@end

