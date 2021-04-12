/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentViewProvider.h>

@protocol SBScenePlaceholderContentViewProviderDelegate;
@class UIUserInterfaceStyleArbiter, NSString;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider> {

	UIUserInterfaceStyleArbiter* _userInterfaceStyleArbiter;
	id<SBScenePlaceholderContentViewProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBScenePlaceholderContentViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithApplication:(id)arg1 ;
-(CGSize)_naturalSizeForOrientation:(long long)arg1 referenceSize:(CGSize)arg2 ;
-(id<SBScenePlaceholderContentViewProviderDelegate>)delegate;
-(void)_snapshotsDidChange:(id)arg1 ;
-(BOOL)_checkApplicationRestorationState:(id)arg1 useSnapshot:(BOOL*)arg2 ;
-(id)_initWithApplication:(id)arg1 userInterfaceStyleArbiter:(id)arg2 ;
-(id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2 ;
-(id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(CGSize)arg5 statusBarDescriptor:(id)arg6 ;
-(void)setDelegate:(id<SBScenePlaceholderContentViewProviderDelegate>)arg1 ;
-(unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2 ;
-(id)_loadLiveXIBViewForApplication:(id)arg1 ;
-(void)dealloc;
@end

