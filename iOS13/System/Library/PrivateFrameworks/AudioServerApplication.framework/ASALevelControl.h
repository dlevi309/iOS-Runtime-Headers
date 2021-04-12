/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/AudioServerApplication-Structs.h>
#import <AudioServerApplication/ASAControl.h>

@interface ASALevelControl : ASAControl

@property (assign,nonatomic) float scalarValue; 
@property (assign,nonatomic) float decibelValue; 
@property (nonatomic,readonly) float minimumDecibelValue; 
@property (nonatomic,readonly) float maximumDecibelValue; 
@property (nonatomic,readonly) AudioValueRange decibelRange; 
-(void)setScalarValue:(float)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(float)scalarValue;
-(float)decibelValue;
-(float)decibelFromScalar:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(float)minimumDecibelValue;
-(float)maximumDecibelValue;
-(void)setDecibelValue:(float)arg1 ;
-(id)coreAudioClassName;
-(AudioValueRange)decibelRange;
@end

