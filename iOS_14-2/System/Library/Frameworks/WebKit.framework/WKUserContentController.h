/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;

}

@property (nonatomic,copy,readonly) NSArray * _userStyleSheets; 
@property (nonatomic,copy,readonly) NSArray * userScripts; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)userScripts;
-(void)_removeAllUserContentFilters;
-(void)addUserScript:(id)arg1 ;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 contentWorld:(id)arg3 ;
-(void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1 ;
-(void)_removeUserScript:(id)arg1 ;
-(void)removeAllScriptMessageHandlersFromContentWorld:(id)arg1 ;
-(void)addScriptMessageHandler:(id)arg1 contentWorld:(id)arg2 name:(id)arg3 ;
-(void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3 ;
-(void)removeAllScriptMessageHandlers;
-(void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)arg1 ;
-(void)_addScriptMessageHandler:(WebScriptMessageHandler*)arg1 ;
-(void)removeAllContentRuleLists;
-(void)_addUserContentFilter:(id)arg1 ;
-(void)_removeAllUserScriptsAssociatedWithContentWorld:(id)arg1 ;
-(void)removeContentRuleList:(id)arg1 ;
-(void)_addUserStyleSheet:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2 ;
-(Object*)_apiObject;
-(void)_removeUserContentFilter:(id)arg1 ;
-(void)addContentRuleList:(id)arg1 ;
-(void)removeAllUserScripts;
-(NSArray *)_userStyleSheets;
-(void)_removeUserStyleSheet:(id)arg1 ;
-(void)_removeAllUserStyleSheets;
-(void)_addUserScriptImmediately:(id)arg1 ;
-(void)addScriptMessageHandler:(id)arg1 name:(id)arg2 ;
-(void)addScriptMessageHandlerWithReply:(id)arg1 contentWorld:(id)arg2 name:(id)arg3 ;
-(void)removeScriptMessageHandlerForName:(id)arg1 contentWorld:(id)arg2 ;
-(void)dealloc;
@end

