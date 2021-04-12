/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/ASWebAuthenticationPresentationContextProviding.h>

@protocol WFUserInterfaceHost;
@class NSString;

@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding> {

	id<WFUserInterfaceHost> _userInterface;

}

@property (nonatomic,readonly) id<WFUserInterfaceHost> userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFUserInterfaceHost>)userInterface;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg1 ;
-(id)initWithUserInterface:(id)arg1 ;
@end

