/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPDBackupRecoveryErrorProvider <NSObject>
@required
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2;
-(void)setPrevailingSecret:(unsigned long long)arg1;
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
-(id)verficationFailedErrorwithUnderlyingError:(id)arg1;
-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2;
-(id)globalHardLimitErrorWithRecord:(id)arg1;
-(id)hardLimitErrorForRecord:(id)arg1;

@end

