/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject {

	NSMapTable* _redirectHandlerMap;

}

@property (nonatomic,retain) NSMapTable * redirectHandlerMap;              //@synthesize redirectHandlerMap=_redirectHandlerMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMapTable *)redirectHandlerMap;
-(void)setRedirectHandlerMap:(NSMapTable *)arg1 ;
-(id)_redirectURLFromURL:(id)arg1 ;
-(void)unRegisterOAuthClientForRedirectURL:(id)arg1 ;
-(void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(/*^block*/id)arg2 ;
-(BOOL)handleOAuthRedirectURL:(id)arg1 ;
@end

