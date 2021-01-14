/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(id)completionHandler;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_locationAuthorizationStatusDidChange:(id)arg1 ;
-(NSDictionary *)dialogMetrics;
-(BOOL)geoLocationEnforced;
-(void)setGeoLocationEnforced:(BOOL)arg1 ;
-(void)setDialogMetrics:(NSDictionary *)arg1 ;
@end

