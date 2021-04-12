/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long packetNumber; 
@property (nonatomic,copy) NSArray * packets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)speechPacket;
+(id)speechPacketWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(BOOL)requiresResponse;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
@end

