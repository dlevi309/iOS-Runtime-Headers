/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class VRFPublicKey, NSData;

@interface PerApplicationTreeConfigNode : GPBMessage

@property (nonatomic,retain) VRFPublicKey * vrfPublicKey; 
@property (assign,nonatomic) BOOL hasVrfPublicKey; 
@property (nonatomic,copy) NSData * publicKeyBytes; 
+(id)descriptor;
@end

