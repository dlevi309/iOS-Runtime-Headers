/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation {

	BOOL _skipPreflight;
	BOOL _handleIdentityLoss;
	FCCKPrivateDatabase* _database;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                          //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) BOOL handleIdentityLoss;                     //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
-(BOOL)validateOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxRetries;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(id)init;
-(BOOL)skipPreflight;
-(BOOL)handleIdentityLoss;
-(void)runChildCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
@end

