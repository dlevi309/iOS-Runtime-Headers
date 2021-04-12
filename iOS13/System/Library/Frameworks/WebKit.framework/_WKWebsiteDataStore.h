/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKWebsiteDataStore : NSObject {

	RetainPtr<WKWebsiteDataStore>* _dataStore;

}

@property (getter=isNonPersistent,readonly) BOOL nonPersistent; 
+(id)nonPersistentDataStore;
+(id)defaultDataStore;
-(id)initWithDataStore:(id)arg1 ;
-(void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isNonPersistent;
@end

