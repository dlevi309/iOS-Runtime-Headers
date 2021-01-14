/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
-(id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3 ;
-(void)sendCompletionCallback:(id)arg1 ;
@end

