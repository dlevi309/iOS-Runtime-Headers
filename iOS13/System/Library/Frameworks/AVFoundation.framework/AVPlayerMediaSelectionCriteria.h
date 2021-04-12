/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {

	void* _criteriaInternal;

}

@property (nonatomic,readonly) NSArray * preferredLanguages; 
@property (nonatomic,readonly) NSArray * preferredMediaCharacteristics; 
@property (nonatomic,readonly) NSArray * principalMediaCharacteristics; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)preferredLanguages;
-(id)figDictionary;
-(id)initWithFigDictionary:(id)arg1 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 ;
-(NSArray *)principalMediaCharacteristics;
-(NSArray *)preferredMediaCharacteristics;
-(id)preferredMediaSubTypes;
-(id)precludedMediaSubTypes;
-(BOOL)preferMultichannelAudio;
-(BOOL)precludeMultichannelAudio;
-(id)initWithPrincipalMediaCharacteristics:(id)arg1 preferredLanguages:(id)arg2 preferredMediaCharacteristics:(id)arg3 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(BOOL)arg5 precludeMultichannelAudio:(BOOL)arg6 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5 ;
@end

