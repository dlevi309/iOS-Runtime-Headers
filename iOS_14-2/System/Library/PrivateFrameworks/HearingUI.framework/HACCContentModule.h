/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/


@protocol HACCContentModule <NSObject>
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@required
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1;
-(void)setDelegate:(id)arg1;
-(void)updateValue;
-(unsigned long long)module;
-(id)contentValue;

@end

