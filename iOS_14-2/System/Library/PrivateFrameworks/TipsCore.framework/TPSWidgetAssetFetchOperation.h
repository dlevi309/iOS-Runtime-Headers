/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAsyncOperation.h>

@class TPSWidgetController, TPSTip, NSURL;

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation {

	TPSWidgetController* _widgetController;
	TPSTip* _widgetTip;
	NSURL* _lightAssetURL;
	NSURL* _darkAssetURL;

}

@property (nonatomic,retain) NSURL * lightAssetURL;                                        //@synthesize lightAssetURL=_lightAssetURL - In the implementation block
@property (nonatomic,retain) NSURL * darkAssetURL;                                         //@synthesize darkAssetURL=_darkAssetURL - In the implementation block
@property (nonatomic,__weak,readonly) TPSWidgetController * widgetController;              //@synthesize widgetController=_widgetController - In the implementation block
@property (nonatomic,readonly) TPSTip * widgetTip;                                         //@synthesize widgetTip=_widgetTip - In the implementation block
-(TPSWidgetController *)widgetController;
-(void)setLightAssetURL:(NSURL *)arg1 ;
-(void)setDarkAssetURL:(NSURL *)arg1 ;
-(NSURL *)lightAssetURL;
-(NSURL *)darkAssetURL;
-(id)initWithTip:(id)arg1 widgetController:(id)arg2 ;
-(void)main;
-(TPSTip *)widgetTip;
@end

