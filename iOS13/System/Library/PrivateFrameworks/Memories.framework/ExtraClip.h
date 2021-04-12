/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

@interface ExtraClip : KonaClip

@property (nonatomic,retain,readonly) NSMutableDictionary * extraDefinition; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startRatio; 
@property (assign,nonatomic) double endRatio; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasVisualCharacteristic;
-(NSMutableDictionary *)extraDefinition;
-(double)startRatio;
-(void)setStartRatio:(double)arg1 ;
-(double)endRatio;
-(void)setEndRatio:(double)arg1 ;
@end

