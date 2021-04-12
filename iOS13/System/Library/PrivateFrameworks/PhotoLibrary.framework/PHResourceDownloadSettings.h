/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)simulateDownload;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(BOOL)simulateDownloadFailure;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
@end

