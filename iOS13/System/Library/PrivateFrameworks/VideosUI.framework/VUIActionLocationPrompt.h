/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary;

@interface VUIActionLocationPrompt : VUIAction {

	BOOL _geoLocationEnforced;
	/*^block*/id _completionHandler;
	NSDictionary* _dialogMetrics;

}

@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL geoLocationEnforced;                  //@synthesize geoLocationEnforced=_geoLocationEnforced - In the implementation block
@property (nonatomic,retain) NSDictionary * dialogMetrics;              //@synthesize dialogMetrics=_dialogMetrics - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_locationAuthorizationStatusDidChange:(id)arg1 ;
-(NSDictionary *)dialogMetrics;
-(BOOL)geoLocationEnforced;
-(void)setGeoLocationEnforced:(BOOL)arg1 ;
-(void)setDialogMetrics:(NSDictionary *)arg1 ;
@end

