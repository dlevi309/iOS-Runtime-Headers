/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface Signature : GPBMessage

@property (nonatomic,copy) NSData * signature; 
@property (nonatomic,copy) NSData * signingKeySpkihash; 
@property (assign,nonatomic) int algorithm; 
+(id)descriptor;
@end

