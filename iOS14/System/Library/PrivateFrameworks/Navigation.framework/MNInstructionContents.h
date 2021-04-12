/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class NSString;


@protocol MNInstructionContents
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
@required
-(NSString *)roadName;
-(long long)context;
-(id)instruction;
-(void)setRoadName:(id)arg1;
-(id)stringForDistance:(double)arg1;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
-(BOOL)suppressNames;
-(void)setSuppressNames:(BOOL)arg1;
-(BOOL)hasServerContent;
-(BOOL)suppressFallback;
-(void)setSuppressFallback:(BOOL)arg1;

@end

