/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class AKAppleIDAuthenticationInAppContext, UIViewController, NSString;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation {

	AKAppleIDAuthenticationInAppContext* _authenticationContext;
	UIViewController* _viewController;
	NSString* _status;

}

@property (nonatomic,retain) NSString * status;              //@synthesize status=_status - In the implementation block
-(void)run;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3 ;
-(void)sendCompletionCallback:(id)arg1 ;
@end

