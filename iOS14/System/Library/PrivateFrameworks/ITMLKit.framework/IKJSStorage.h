/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSStorage.h>

@protocol IKJSStorage <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@required
-(void)removeItem:(id)arg1;
-(void)clear;
-(id)key:(unsigned long long)arg1;
-(unsigned long long)length;
-(id)getItem:(id)arg1;
-(void)setItem:(id)arg1 :(id)arg2;

@end


@protocol IKAppDataStoring, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IKJSStorage : IKJSObject <IKJSStorage> {

	struct {
		BOOL usesExternalDataStore;
		BOOL externalStorageHasDictionaryRepresentation;
	}  _flags;
	id<IKAppDataStoring> _appStorage;
	NSMutableDictionary* _storageDict;
	NSObject*<OS_dispatch_queue> _storageQueue;

}

@property (nonatomic,retain) NSMutableDictionary * storageDict;                      //@synthesize storageDict=_storageDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;              //@synthesize storageQueue=_storageQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<IKAppDataStoring> appStorage;               //@synthesize appStorage=_appStorage - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
-(void)removeItem:(id)arg1 ;
-(void)clear;
-(id)key:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)getItem:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(id)keysAndValues;
-(id)initWithAppContext:(id)arg1 appStorage:(id)arg2 ;
-(NSMutableDictionary *)storageDict;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_verifyExternalDataStoreForKey:(id)arg1 ;
-(id<IKAppDataStoring>)appStorage;
-(void)setItem:(id)arg1 :(id)arg2 ;
@end

