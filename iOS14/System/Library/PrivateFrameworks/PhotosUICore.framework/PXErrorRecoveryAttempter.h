/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject {

	NSArray* _recoveryOptions;
	long long _preferredRecoveryOptionIndex;

}

@property (nonatomic,copy) NSArray * recoveryOptions;                             //@synthesize recoveryOptions=_recoveryOptions - In the implementation block
@property (assign,nonatomic) long long preferredRecoveryOptionIndex;              //@synthesize preferredRecoveryOptionIndex=_preferredRecoveryOptionIndex - In the implementation block
-(id)init;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(long long)alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)recoveryOptions;
-(void)setRecoveryOptions:(NSArray *)arg1 ;
-(long long)preferredRecoveryOptionIndex;
-(void)setPreferredRecoveryOptionIndex:(long long)arg1 ;
@end

