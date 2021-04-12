/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECAccount.h>

@interface ECPOPAccount : ECAccount

@property (assign,nonatomic) long long bigMessageWarningSize; 
@property (assign,nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer; 
@property (nonatomic,readonly) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet; 
@property (assign,nonatomic) long long deletionPolicy; 
@property (assign,nonatomic) BOOL hasNotFinishedFirstTimeSync; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(long long)defaultSecurePortNumber;
-(long long)defaultPortNumber;
-(long long)bigMessageWarningSize;
-(void)setBigMessageWarningSize:(long long)arg1 ;
-(long long)daysAfterDownloadToDeleteMessagesFromServer;
-(void)setDaysAfterDownloadToDeleteMessagesFromServer:(long long)arg1 ;
-(BOOL)daysAfterDownloadToDeleteMessagesFromServerIsSet;
-(long long)deletionPolicy;
-(void)setDeletionPolicy:(long long)arg1 ;
-(BOOL)hasNotFinishedFirstTimeSync;
-(void)setHasNotFinishedFirstTimeSync:(BOOL)arg1 ;
@end

