/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@interface NUSaliencyRequest : NURenderRequest {

	BOOL _useLargeResolution;
	id<NUScalePolicy> _scalePolicy;

}

@property (nonatomic,retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (assign,nonatomic) BOOL useLargeResolution;                    //@synthesize useLargeResolution=_useLargeResolution - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(id)submitGenericSynchronous:(out id*)arg1 ;
-(BOOL)useLargeResolution;
-(void)setUseLargeResolution:(BOOL)arg1 ;
@end

