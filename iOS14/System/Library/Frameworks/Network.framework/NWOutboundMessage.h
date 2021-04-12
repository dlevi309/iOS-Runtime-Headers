/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWMessage.h>

@interface NWOutboundMessage : NWMessage

@property (assign,nonatomic) double relativePriority; 
@property (assign,nonatomic) unsigned long long expirationMilliseconds; 
-(void)setRelativePriority:(double)arg1 ;
-(double)relativePriority;
-(unsigned long long)expirationMilliseconds;
-(void)setExpirationMilliseconds:(unsigned long long)arg1 ;
-(void)addAntecedent:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
@end

