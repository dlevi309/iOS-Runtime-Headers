/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)defaultStore;
+(id)storeWithURL:(id)arg1 ;
+(id)defaultStoreWithLegacyFilename;
+(id)storeWithURLAndLegacyFilename:(id)arg1 ;
-(void)dealloc;
-(Object*)_apiObject;
-(void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAvailableContentRuleListIdentifiers:(/*^block*/id)arg1 ;
-(void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeAllContentRuleLists;
-(void)_invalidateContentRuleListVersionForIdentifier:(id)arg1 ;
-(void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

