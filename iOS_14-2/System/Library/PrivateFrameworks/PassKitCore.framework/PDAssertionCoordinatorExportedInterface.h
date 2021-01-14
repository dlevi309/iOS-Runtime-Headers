/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>
@required
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(/*^block*/id)arg3;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3;

@end

