/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSObject;

@interface SSPersistentCache : NSObject {

	BOOL _safeKeys;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSFileManager* _fm;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)safeKeyForKey:(id)arg1 ;
-(BOOL)clear;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_isFileNotFound:(id)arg1 ;
-(id)description;
-(void)setFilenameSafeKeys:(BOOL)arg1 ;
-(id)_pathForKey:(id)arg1 ;
-(BOOL)removeDataForKey:(id)arg1 ;
-(void)dealloc;
@end

