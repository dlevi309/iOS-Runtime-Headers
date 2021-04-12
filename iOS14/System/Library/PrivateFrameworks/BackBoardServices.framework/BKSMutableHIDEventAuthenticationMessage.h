/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventAuthenticationMessage.h>

@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (assign,nonatomic) long long versionedPID; 
@property (assign,nonatomic) unsigned eventType; 
@property (assign,nonatomic) unsigned long long originIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
-(void)setEventType:(unsigned)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
-(void)setDestinationAuditToken:(id)arg1 ;
-(void)setOriginIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
@end

