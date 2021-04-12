/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHImageCacheDelegate;
#import <Photos/Photos-Structs.h>
@class NSMutableDictionary, PHRecyclableObjectVendor;

@interface PHImageCache : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSMutableDictionary* _uncommittedInserts;
	NSMutableDictionary* _uncommittedDeletes;
	os_unfair_lock_s _lock;
	PHRecyclableObjectVendor* _entryVendor;
	id<PHImageCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)removeAllEntries;
-(id)init;
-(id<PHImageCacheDelegate>)delegate;
-(void)removeEntriesForKeys:(id)arg1 ;
-(BOOL)pinEntryForKey:(id)arg1 requestID:(int)arg2 inFlightRequestID:(int*)arg3 ;
-(void)setDelegate:(id<PHImageCacheDelegate>)arg1 ;
-(BOOL)populateEntryWithImage:(CGImageRef)arg1 requestID:(int)arg2 forKey:(id)arg3 additionalInfo:(id)arg4 ;
-(void)_removeEntry:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg1 ;
-(void)commitChangesWithQueueToProcessDeletes:(id)arg1 ;
-(void)queryEntryForKey:(id)arg1 didWaitForInFlightRequest:(BOOL*)arg2 didFindImage:(BOOL*)arg3 entryIsValidBlock:(/*^block*/id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

