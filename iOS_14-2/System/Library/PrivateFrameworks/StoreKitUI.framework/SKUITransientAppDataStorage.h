/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppDataStoring.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storage;                         //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)storage;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)removeDataForKey:(id)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getDataForKey:(id)arg1 ;
@end

