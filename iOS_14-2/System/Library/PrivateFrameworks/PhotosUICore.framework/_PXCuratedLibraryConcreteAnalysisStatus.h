/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryAnalysisStatus.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class NSString;

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>

@property (nonatomic,readonly) BOOL isDeviceUnplugged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)alternateTitleIndexDidChange;
-(void)_batteryStateDidChange:(id)arg1 ;
-(void)_updateStatusProperties;
-(BOOL)hasBattery;
-(void)_configureBatteryMonitoring;
-(long long)_analyzingStateForDataSource:(id)arg1 ;
-(float)_enrichmentProgressForDataSource:(id)arg1 ;
-(BOOL)isDeviceUnplugged;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

