/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)description;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(id)submitGenericSynchronous:(out id*)arg1 ;
-(BOOL)useLargeResolution;
-(void)setUseLargeResolution:(BOOL)arg1 ;
@end

