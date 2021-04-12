/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface _ML3ValidatableDatabase : NSObject {

	unsigned long long _queueID;
	NSString* _databasePath;
	unsigned long long _validationState;
	NSObject*<OS_dispatch_queue> _validationSerialQueue;

}

@property (nonatomic,copy) NSString * databasePath;                                           //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) unsigned long long validationState;                              //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> validationSerialQueue;              //@synthesize validationSerialQueue=_validationSerialQueue - In the implementation block
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)validationState;
-(NSObject*<OS_dispatch_queue>)validationSerialQueue;
-(BOOL)currentQueueIsValidationQueue;
-(void)setValidationSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setValidationState:(unsigned long long)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
@end

