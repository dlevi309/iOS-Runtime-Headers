/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)scalarValue;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(AudioValueRange)decibelRange;
-(float)decibelValue;
-(float)minimumDecibelValue;
-(float)maximumDecibelValue;
-(void)setScalarValue:(float)arg1 ;
-(void)setDecibelValue:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(float)decibelFromScalar:(float)arg1 ;
@end

