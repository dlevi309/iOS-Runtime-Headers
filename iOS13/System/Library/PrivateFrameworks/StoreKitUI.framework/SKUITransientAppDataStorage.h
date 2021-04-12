/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)count;
-(void)clear;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSMutableDictionary *)storage;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(void)removeDataForKey:(id)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getDataForKey:(id)arg1 ;
@end

