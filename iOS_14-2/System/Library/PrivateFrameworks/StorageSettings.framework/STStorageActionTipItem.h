/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSDate;

@interface STStorageActionTipItem : NSObject {

	BOOL _recoverable;
	long long _size;
	NSDate* _lastUsedDate;
	NSDate* _createdDate;

}

@property (assign) long long size;                              //@synthesize size=_size - In the implementation block
@property (getter=isRecoverable) BOOL recoverable;              //@synthesize recoverable=_recoverable - In the implementation block
@property (retain) NSDate * lastUsedDate;                       //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (retain) NSDate * createdDate;                        //@synthesize createdDate=_createdDate - In the implementation block
-(NSDate *)lastUsedDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(NSDate *)createdDate;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(BOOL)isRecoverable;
-(void)setRecoverable:(BOOL)arg1 ;
@end

