/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

