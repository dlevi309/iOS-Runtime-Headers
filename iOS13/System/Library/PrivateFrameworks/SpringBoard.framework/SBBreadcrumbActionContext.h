/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class LSAppLink, NSDictionary, NSString, UISystemNavigationAction;

@interface SBBreadcrumbActionContext : NSObject {

	BOOL _didCaptureContext;
	unsigned long long _lastSource;
	BOOL _wasFromSpotlight;
	BOOL _wasFromAssistant;
	LSAppLink* _appLink;
	NSDictionary* _appLinkState;
	NSString* _previousSideBundleId;
	NSString* _breadcrumbAppBundleID;
	NSString* _breadcrumbSceneID;
	NSString* _primaryTitle;
	NSString* _secondaryTitle;
	unsigned long long _rightType;
	unsigned long long _leftType;
	UISystemNavigationAction* _action;
	NSDictionary* _destinationContexts;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) UISystemNavigationAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSDictionary * destinationContexts;               //@synthesize destinationContexts=_destinationContexts - In the implementation block
@property (nonatomic,copy) id responseHandler;                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)dealloc;
-(UISystemNavigationAction *)action;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setAction:(UISystemNavigationAction *)arg1 ;
-(NSDictionary *)destinationContexts;
-(void)setDestinationContexts:(NSDictionary *)arg1 ;
@end

