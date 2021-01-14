/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <libobjc.A.dylib/ASOOverlay.h>
#import <libobjc.A.dylib/ASOOverlayDelegate.h>

@protocol SKOverlayDelegate;
@class SKOverlayConfiguration, NSString;

@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate> {

	id<SKOverlayDelegate> _delegate;
	SKOverlayConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<SKOverlayDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) SKOverlayConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,__weak,readonly) id<ASOOverlayDelegate> overlayDelegate; 
@property (copy,readonly) id<ASOOverlayConfiguration> overlayConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)dismissOverlayInScene:(id)arg1 ;
+(id)unsupportedPlatformErrorWithAPIName:(id)arg1 ;
-(id<SKOverlayDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<SKOverlayDelegate>)arg1 ;
-(SKOverlayConfiguration *)configuration;
-(void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2 ;
-(void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2 ;
-(void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2 ;
-(void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2 ;
-(id)tranformToPublicError:(id)arg1 ;
-(void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id<ASOOverlayDelegate>)overlayDelegate;
-(id<ASOOverlayConfiguration>)overlayConfiguration;
-(void)presentInScene:(id)arg1 ;
@end

