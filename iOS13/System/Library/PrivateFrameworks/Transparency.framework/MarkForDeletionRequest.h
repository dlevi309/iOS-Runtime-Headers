/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSData;

@interface MarkForDeletionRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) unsigned long long appVersion; 
@property (nonatomic,copy) NSString * requestUuid; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceId; 
@property (nonatomic,copy) NSData * clientData; 
+(id)descriptor;
@end

