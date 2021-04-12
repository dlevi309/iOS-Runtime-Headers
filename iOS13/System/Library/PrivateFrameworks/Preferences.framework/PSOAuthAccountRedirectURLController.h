/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject {

	NSMapTable* _redirectHandlerMap;

}

@property (nonatomic,retain) NSMapTable * redirectHandlerMap;              //@synthesize redirectHandlerMap=_redirectHandlerMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setRedirectHandlerMap:(NSMapTable *)arg1 ;
-(NSMapTable *)redirectHandlerMap;
-(id)_redirectURLFromURL:(id)arg1 ;
-(void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(/*^block*/id)arg2 ;
-(void)unRegisterOAuthClientForRedirectURL:(id)arg1 ;
-(BOOL)handleOAuthRedirectURL:(id)arg1 ;
@end

