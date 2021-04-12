/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_addUserStyleSheet:(id)arg1 ;
-(Object*)_apiObject;
-(void)removeAllUserScripts;
-(NSArray *)userScripts;
-(void)addUserScript:(id)arg1 ;
-(void)addContentRuleList:(id)arg1 ;
-(void)removeContentRuleList:(id)arg1 ;
-(void)removeAllContentRuleLists;
-(void)addScriptMessageHandler:(id)arg1 name:(id)arg2 ;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
-(void)_removeUserScript:(id)arg1 ;
-(void)_removeAllUserScriptsAssociatedWithUserContentWorld:(id)arg1 ;
-(void)_addUserScriptImmediately:(id)arg1 ;
-(void)_addUserContentFilter:(id)arg1 ;
-(void)_removeUserContentFilter:(id)arg1 ;
-(void)_removeAllUserContentFilters;
-(NSArray *)_userStyleSheets;
-(void)_removeUserStyleSheet:(id)arg1 ;
-(void)_removeAllUserStyleSheets;
-(void)_removeAllUserStyleSheetsAssociatedWithUserContentWorld:(id)arg1 ;
-(void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3 ;
-(void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2 ;
-(void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1 ;
@end

