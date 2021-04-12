/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class SignedMapHead;

@interface PerApplicationTreeNode : GPBMessage

@property (nonatomic,retain) SignedMapHead * objectMapHead; 
@property (assign,nonatomic) BOOL hasObjectMapHead; 
@property (nonatomic,retain) SignedMapHead * revocationMapHead; 
@property (assign,nonatomic) BOOL hasRevocationMapHead; 
+(id)descriptor;
@end

