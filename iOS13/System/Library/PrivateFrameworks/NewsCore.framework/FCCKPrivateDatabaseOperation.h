/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(unsigned long long)maxRetries;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(BOOL)skipPreflight;
-(BOOL)validateOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(BOOL)handleIdentityLoss;
-(void)runChildCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
@end

