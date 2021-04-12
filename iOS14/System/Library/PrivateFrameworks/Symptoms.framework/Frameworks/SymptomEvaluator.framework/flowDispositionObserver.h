/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol flowDispositionObserver <NSObject>
@property (assign,nonatomic) BOOL enabled; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(id)infoDir;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4;
-(void)configurePolicies:(id)arg1;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3;

@end

