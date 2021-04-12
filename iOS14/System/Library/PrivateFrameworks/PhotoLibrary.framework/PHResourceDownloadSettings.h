/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PHSettings.h>

@interface PHResourceDownloadSettings : PHSettings {

	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;

}

@property (assign,nonatomic) BOOL simulateDownload;                     //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;              //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(BOOL)simulateDownload;
-(BOOL)simulateDownloadFailure;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
@end

