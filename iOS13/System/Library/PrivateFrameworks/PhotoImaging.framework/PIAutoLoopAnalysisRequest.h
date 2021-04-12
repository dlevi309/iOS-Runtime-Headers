/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface PIAutoLoopAnalysisRequest : NURenderRequest {

	long long _flavor;

}

@property (assign,nonatomic) long long flavor;              //@synthesize flavor=_flavor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(long long)flavor;
-(void)setFlavor:(long long)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

