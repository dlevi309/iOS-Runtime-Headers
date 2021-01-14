/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NCSSettingsManagerDelegate>)delegate;
-(void)setDelegate:(id<NCSSettingsManagerDelegate>)arg1 ;
-(void)loadSettings;
-(void)dealloc;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetComplications;
-(id)_fetchSockPuppetComplications;
@end

