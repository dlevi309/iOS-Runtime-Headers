/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppDataStoring.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface IKAppDataStorage : NSObject <IKAppDataStoring> {

	unsigned long long _format;
	NSString* _filePath;
	NSString* _identifier;
	NSMutableDictionary* _storageDict;
	NSObject*<OS_dispatch_queue> _storageQueue;

}

@property (nonatomic,retain) NSMutableDictionary * storageDict;                      //@synthesize storageDict=_storageDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;              //@synthesize storageQueue=_storageQueue - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;                           //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)count;
-(void)clear;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
-(NSString *)filePath;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(NSMutableDictionary *)storageDict;
-(void)_saveDict:(id)arg1 ;
-(id)getDataForKey:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 identifier:(id)arg2 ;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

