/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface SingleDataRecord : GPBMessage

@property (assign,nonatomic) unsigned long long appVersion; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long markedForDeletionMs; 
@property (assign,nonatomic) unsigned long long deletionEscrowExpiryMs; 
@property (assign,nonatomic) unsigned long long addedMs; 
+(id)descriptor;
@end

