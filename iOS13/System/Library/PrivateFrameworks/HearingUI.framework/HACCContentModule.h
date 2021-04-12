/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/


@protocol HACCContentModule <NSObject>
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@required
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)module;
-(void)setModule:(unsigned long long)arg1;
-(void)updateValue;
-(id)contentValue;

@end

