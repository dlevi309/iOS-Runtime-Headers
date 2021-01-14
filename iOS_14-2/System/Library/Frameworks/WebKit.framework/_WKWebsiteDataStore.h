/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKWebsiteDataStore : NSObject {

	RetainPtr<WKWebsiteDataStore>* _dataStore;

}

@property (getter=isNonPersistent,readonly) BOOL nonPersistent; 
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
-(id)initWithDataStore:(id)arg1 ;
-(void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isNonPersistent;
-(void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

