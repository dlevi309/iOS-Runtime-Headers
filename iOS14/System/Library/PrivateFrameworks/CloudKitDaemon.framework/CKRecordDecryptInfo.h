/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_group;
@class CKRecord, NSError, NSObject;

@interface CKRecordDecryptInfo : NSObject {

	CKRecord* _record;
	NSError* _error;
	NSObject*<OS_dispatch_group> _decryptGroup;
	/*^block*/id _callback;
	unsigned long long _numUnwrapAttempts;

}

@property (nonatomic,readonly) CKRecord * record;                                    //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> decryptGroup;              //@synthesize decryptGroup=_decryptGroup - In the implementation block
@property (nonatomic,copy) id callback;                                              //@synthesize callback=_callback - In the implementation block
@property (assign) unsigned long long numUnwrapAttempts;                             //@synthesize numUnwrapAttempts=_numUnwrapAttempts - In the implementation block
-(CKRecord *)record;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)_setupDecryptCallbackForQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)decryptGroup;
-(id)initWithRecord:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setDecryptGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(unsigned long long)numUnwrapAttempts;
-(void)setNumUnwrapAttempts:(unsigned long long)arg1 ;
@end

