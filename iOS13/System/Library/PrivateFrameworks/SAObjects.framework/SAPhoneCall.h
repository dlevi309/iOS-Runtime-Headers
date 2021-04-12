/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAPersonAttribute, NSNumber;

@interface SAPhoneCall : SADomainCommand

@property (nonatomic,retain) SAPersonAttribute * callRecipient; 
@property (nonatomic,copy) NSNumber * emergencyCall; 
@property (assign,nonatomic) BOOL faceTime; 
@property (assign,nonatomic) BOOL faceTimeAudio; 
@property (assign,nonatomic) BOOL handsFreeCall; 
@property (assign,nonatomic) BOOL speakerphoneCall; 
+(id)call;
+(id)callWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAPersonAttribute *)callRecipient;
-(void)setCallRecipient:(SAPersonAttribute *)arg1 ;
-(NSNumber *)emergencyCall;
-(void)setEmergencyCall:(NSNumber *)arg1 ;
-(BOOL)faceTime;
-(void)setFaceTime:(BOOL)arg1 ;
-(BOOL)faceTimeAudio;
-(void)setFaceTimeAudio:(BOOL)arg1 ;
-(BOOL)handsFreeCall;
-(void)setHandsFreeCall:(BOOL)arg1 ;
-(BOOL)speakerphoneCall;
-(void)setSpeakerphoneCall:(BOOL)arg1 ;
@end

