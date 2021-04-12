/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

