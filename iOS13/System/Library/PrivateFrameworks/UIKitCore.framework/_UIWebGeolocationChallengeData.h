/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)token;
-(id<WebAllowDenyPolicyListener>)listener;
-(void)setListener:(id<WebAllowDenyPolicyListener>)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(NSURL *)requestingURL;
-(void)setRequestingURL:(NSURL *)arg1 ;
@end

