/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKContentRuleListStore, NSString;

@interface _WKUserContentExtensionStore : NSObject <WKObject> {

	RetainPtr<WKContentRuleListStore>* _contentRuleListStore;

}

@property (nonatomic,readonly) WKContentRuleListStore * _contentRuleListStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)defaultStore;
+(id)storeWithURL:(id)arg1 ;
-(Object*)_apiObject;
-(WKContentRuleListStore *)_contentRuleListStore;
-(id)_initWithWKContentRuleListStore:(id)arg1 ;
-(void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeAllContentExtensions;
-(void)_invalidateContentExtensionVersionForIdentifier:(id)arg1 ;
@end

