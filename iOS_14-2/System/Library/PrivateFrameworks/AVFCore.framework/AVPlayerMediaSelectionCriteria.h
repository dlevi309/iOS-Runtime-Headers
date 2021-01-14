/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {

	void* _criteriaInternal;

}

@property (nonatomic,readonly) NSArray * preferredLanguages; 
@property (nonatomic,readonly) NSArray * preferredMediaCharacteristics; 
@property (nonatomic,readonly) NSArray * principalMediaCharacteristics; 
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(BOOL)arg5 precludeMultichannelAudio:(BOOL)arg6 ;
-(id)init;
-(NSArray *)preferredLanguages;
-(id)description;
-(NSArray *)principalMediaCharacteristics;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(NSArray *)preferredMediaCharacteristics;
-(id)preferredMediaSubTypes;
-(id)precludedMediaSubTypes;
-(BOOL)preferMultichannelAudio;
-(BOOL)precludeMultichannelAudio;
-(id)initWithPrincipalMediaCharacteristics:(id)arg1 preferredLanguages:(id)arg2 preferredMediaCharacteristics:(id)arg3 ;
-(id)figDictionary;
-(id)initWithFigDictionary:(id)arg1 ;
-(void)dealloc;
@end

