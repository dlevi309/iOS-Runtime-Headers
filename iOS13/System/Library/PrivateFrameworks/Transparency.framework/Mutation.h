/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface Mutation : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int mutationType; 
@property (assign,nonatomic) unsigned long long mutationMs; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceIdVrfoutput; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long appVersion; 
+(id)descriptor;
@end

