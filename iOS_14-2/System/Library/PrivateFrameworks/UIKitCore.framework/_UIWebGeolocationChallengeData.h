/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebAllowDenyPolicyListener;
@class NSString, NSURL, UIView;

@interface _UIWebGeolocationChallengeData : NSObject {

	NSString* _token;
	NSURL* _requestingURL;
	UIView* _view;
	id<WebAllowDenyPolicyListener> _listener;

}

@property (nonatomic,retain) NSString * token;                                     //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSURL * requestingURL;                                //@synthesize requestingURL=_requestingURL - In the implementation block
@property (nonatomic,retain) UIView * view;                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<WebAllowDenyPolicyListener> listener;              //@synthesize listener=_listener - In the implementation block
-(void)setView:(UIView *)arg1 ;
-(NSURL *)requestingURL;
-(void)setRequestingURL:(NSURL *)arg1 ;
-(id<WebAllowDenyPolicyListener>)listener;
-(UIView *)view;
-(void)setToken:(NSString *)arg1 ;
-(void)setListener:(id<WebAllowDenyPolicyListener>)arg1 ;
-(NSString *)token;
-(void)dealloc;
@end

