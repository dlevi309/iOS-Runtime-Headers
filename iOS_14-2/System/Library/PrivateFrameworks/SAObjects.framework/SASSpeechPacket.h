/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long packetNumber; 
@property (nonatomic,copy) NSArray * packets; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechPacket;
+(id)speechPacketWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(void)setPackets:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)packets;
@end

