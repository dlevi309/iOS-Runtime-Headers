/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInputGroupInternal, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {

	AVAssetWriterInputGroupInternal* _internal;

}

@property (nonatomic,readonly) NSArray * provisionalInputs; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) AVAssetWriterInput * defaultInput; 
+(id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2 ;
+(id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)options;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)inputs;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(NSArray *)provisionalInputs;
-(AVAssetWriterInput *)defaultInput;
-(id)initWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
@end

