/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWContentRuleManager.h>

@protocol SWContentRuleManager <NSObject>
@required
-(void)addContentRuleList:(id)arg1 identifier:(id)arg2;
-(void)removeContentListForIdentifier:(id)arg1;
-(id)configureContentRules;

@end


@protocol OS_dispatch_group;
@class WKUserContentController, NSObject, NSString;

@interface SWContentRuleManager : NSObject <SWContentRuleManager> {

	WKUserContentController* _userContentController;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,readonly) WKUserContentController * userContentController;              //@synthesize userContentController=_userContentController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> dispatchGroup;                   //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(WKUserContentController *)userContentController;
-(void)addContentRuleList:(id)arg1 identifier:(id)arg2 ;
-(void)removeContentListForIdentifier:(id)arg1 ;
-(id)configureContentRules;
-(id)initWithUserContentController:(id)arg1 ;
@end

