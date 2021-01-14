/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PLPhotoLibrary, CPLStatus, NSString;

@interface PXCMMEnabledStatusProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {

	BOOL _isFeatureEnabled;
	BOOL _isCPLEnabled;
	BOOL _hasExitDate;
	PLPhotoLibrary* _pl_photoLibrary;
	CPLStatus* _cplStatus;
	BOOL _enabled;

}

@property (getter=isEnabled,readonly) BOOL enabled;                 //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentStatusProvider;
-(void)statusDidChange:(id)arg1 ;
-(id)init;
-(BOOL)_isFeatureEnabled;
-(BOOL)_isCPLEnabled;
-(BOOL)_hasExitDate;
-(BOOL)_isCMMEnabled;
-(void)_updateIsCMMEnabled;
-(void)_updateIsFeatureEnabled;
-(void)_updateIsCPLEnabled;
-(void)_updateHasExitDate;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isEnabled;
@end

