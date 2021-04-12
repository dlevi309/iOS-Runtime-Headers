/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSData;

@interface InsertRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) unsigned long long appVersion; 
@property (nonatomic,copy) NSString * requestUuid; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,copy) NSData * deviceId; 
@property (nonatomic,copy) NSData * clientData; 
@property (nonatomic,copy) NSData * accountId; 
+(id)descriptor;
@end

