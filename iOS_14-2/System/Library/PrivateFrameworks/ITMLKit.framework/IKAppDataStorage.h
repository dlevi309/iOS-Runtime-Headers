/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filePath;
-(void)clear;
-(id)dictionaryRepresentation;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(void)removeDataForKey:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 identifier:(id)arg2 ;
-(id)getDataForKey:(id)arg1 ;
-(NSMutableDictionary *)storageDict;
-(void)_saveDict:(id)arg1 ;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

