/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface PIAutoLoopAnalysisRequest : NURenderRequest {

	long long _flavor;

}

@property (assign,nonatomic) long long flavor;              //@synthesize flavor=_flavor - In the implementation block
-(void)submit:(/*^block*/id)arg1 ;
-(long long)flavor;
-(void)setFlavor:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

