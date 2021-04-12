/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWMessage.h>

@interface NWOutboundMessage : NWMessage

@property (assign,nonatomic) double relativePriority; 
@property (assign,nonatomic) unsigned long long expirationMilliseconds; 
-(double)relativePriority;
-(id)initWithContent:(id)arg1 ;
-(unsigned long long)expirationMilliseconds;
-(void)setExpirationMilliseconds:(unsigned long long)arg1 ;
-(void)setRelativePriority:(double)arg1 ;
-(void)addAntecedent:(id)arg1 ;
@end

