/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BLTPreviouslySentMessageStore : NSObject {

	NSMutableDictionary* _messageDigests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _saveTimer;
	NSString* _path;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)clear;
-(BOOL)dirty;
-(void)_save;
-(void)setDirty:(BOOL)arg1 ;
-(void)invalidate;
-(BOOL)isEmpty;
-(void)dealloc;
-(id)initWithMessageStorePath:(id)arg1 ;
-(id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2 ;
-(void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2 ;
-(void)removeDigestForKey:(id)arg1 ;
-(void)_cancelSave;
-(void)_enqueueSave;
@end

