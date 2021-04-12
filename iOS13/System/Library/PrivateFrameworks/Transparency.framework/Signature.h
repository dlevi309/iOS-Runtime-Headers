/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

