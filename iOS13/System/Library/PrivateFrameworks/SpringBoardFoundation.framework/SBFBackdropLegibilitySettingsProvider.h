/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithBackdropView:(id)arg1 ;
@end

