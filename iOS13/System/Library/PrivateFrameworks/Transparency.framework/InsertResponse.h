/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class SignedMutationTimestamp, VRFWitness, NSData, NSString;

@interface InsertResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) SignedMutationTimestamp * smt; 
@property (assign,nonatomic) BOOL hasSmt; 
@property (nonatomic,retain) VRFWitness * uriWitness; 
@property (assign,nonatomic) BOOL hasUriWitness; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,retain) VRFWitness * deviceIdWitness; 
@property (assign,nonatomic) BOOL hasDeviceIdWitness; 
@property (nonatomic,retain) VRFWitness * clientDataWitness; 
@property (assign,nonatomic) BOOL hasClientDataWitness; 
@property (nonatomic,copy) NSString * serverEventInfo; 
+(id)descriptor;
@end

