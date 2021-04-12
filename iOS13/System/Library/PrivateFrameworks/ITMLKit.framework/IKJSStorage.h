/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSStorage.h>

@protocol IKJSStorage <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@required
-(unsigned long long)length;
-(void)clear;
-(id)getItem:(id)arg1;
-(void)removeItem:(id)arg1;
-(id)key:(unsigned long long)arg1;
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
-(unsigned long long)length;
-(void)clear;
-(id)getItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 appStorage:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(NSMutableDictionary *)storageDict;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_verifyExternalDataStoreForKey:(id)arg1 ;
-(id<IKAppDataStoring>)appStorage;
-(id)key:(unsigned long long)arg1 ;
-(void)setItem:(id)arg1 :(id)arg2 ;
-(id)keysAndValues;
@end

