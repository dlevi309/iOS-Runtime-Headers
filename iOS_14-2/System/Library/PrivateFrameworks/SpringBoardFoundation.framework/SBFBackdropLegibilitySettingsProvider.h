/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/_UIBackdropViewObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, _UIBackdropView, NSString;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider> {

	_UIBackdropView* _backdropView;
	_UILegibilitySettings* _legibilitySettings;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;

}

@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithBackdropView:(id)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)dealloc;
@end

