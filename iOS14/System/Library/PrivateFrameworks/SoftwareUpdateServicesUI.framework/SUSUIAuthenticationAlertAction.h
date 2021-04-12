/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <BaseBoard/BSAction.h>

@class SUDownload, SUAutoInstallOperation;

@interface SUSUIAuthenticationAlertAction : BSAction {

	BOOL _loaded;
	SUDownload* _download;
	SUAutoInstallOperation* _autoInstallOperation;
	BOOL _forInstallTonight;
	BOOL _canDeferInstallation;

}

@property (nonatomic,retain,readonly) SUDownload * download; 
@property (nonatomic,retain,readonly) SUAutoInstallOperation * autoInstallOperation; 
@property (nonatomic,readonly) BOOL forInstallTonight; 
@property (nonatomic,readonly) BOOL canDeferInstallation; 
-(SUDownload *)download;
-(void)_loadIfNecessary;
-(void)fireCompletionIfNecessaryForResult:(BOOL)arg1 ;
-(id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(BOOL)arg3 canDeferInstallation:(BOOL)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(SUAutoInstallOperation *)autoInstallOperation;
-(BOOL)forInstallTonight;
-(BOOL)canDeferInstallation;
@end

