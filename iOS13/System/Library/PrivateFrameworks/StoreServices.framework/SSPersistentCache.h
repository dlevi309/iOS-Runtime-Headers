/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(BOOL)clear;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeDataForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(BOOL)_isFileNotFound:(id)arg1 ;
-(void)setFilenameSafeKeys:(BOOL)arg1 ;
@end

