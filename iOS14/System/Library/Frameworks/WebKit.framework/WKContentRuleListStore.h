/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
+(id)defaultStoreWithLegacyFilename;
+(id)storeWithURL:(id)arg1 ;
+(id)storeWithURLAndLegacyFilename:(id)arg1 ;
-(Object*)_apiObject;
-(void)_removeAllContentRuleLists;
-(void)getAvailableContentRuleListIdentifiers:(/*^block*/id)arg1 ;
-(void)_invalidateContentRuleListVersionForIdentifier:(id)arg1 ;
-(void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

