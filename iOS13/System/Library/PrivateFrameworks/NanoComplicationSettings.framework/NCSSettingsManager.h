/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
*/

#import <NanoComplicationSettings/NCSInternalSettingsManager.h>

@protocol NCSSettingsManagerDelegate;
@interface NCSSettingsManager : NCSInternalSettingsManager {

	id<NCSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedSettingsManager;
-(id)init;
-(void)dealloc;
-(id<NCSSettingsManagerDelegate>)delegate;
-(void)setDelegate:(id<NCSSettingsManagerDelegate>)arg1 ;
-(void)loadSettings;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetComplications;
-(id)_fetchSockPuppetComplications;
@end

