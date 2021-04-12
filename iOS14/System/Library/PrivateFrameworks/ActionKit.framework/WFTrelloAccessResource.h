/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccountAccessResource.h>

@class WFWebAuthenticationSessionPresentationContext;

@interface WFTrelloAccessResource : WFAccountAccessResource {

	WFWebAuthenticationSessionPresentationContext* _presentationContext;

}

@property (nonatomic,retain) WFWebAuthenticationSessionPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
-(WFWebAuthenticationSessionPresentationContext *)presentationContext;
-(Class)accountClass;
-(void)setPresentationContext:(WFWebAuthenticationSessionPresentationContext *)arg1 ;
-(id)associatedAppIdentifier;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationURLWithCallbackURL:(id)arg1 ;
@end

