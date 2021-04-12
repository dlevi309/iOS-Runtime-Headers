/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMConfigurationStatusUpdater : NSObject
+(id)fileSystemSafeCharacterSet;
+(id)getStatusDirectoryURLForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 ;
-(void)assetCannotBeDownloaded:(id)arg1 error:(id)arg2 ;
-(void)assetSuccessfullyResolved:(id)arg1 ;
-(void)assetCannotBeVerified:(id)arg1 error:(id)arg2 ;
-(void)assetEncounteredInternalError:(id)arg1 error:(id)arg2 ;
-(void)_persistStatusForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 validity:(BOOL)arg5 reasons:(id)arg6 ;
-(id)_getStatusFileURLForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 ;
-(void)assetCannotBeDeserialized:(id)arg1 error:(id)arg2 ;
-(void)configurationCannotBeDeserialized:(id)arg1 error:(id)arg2 ;
-(void)configurationFailedToApply:(id)arg1 error:(id)arg2 ;
-(void)configurationIsInvalid:(id)arg1 error:(id)arg2 ;
-(void)configurationSuccessfullyApplied:(id)arg1 ;
@end

