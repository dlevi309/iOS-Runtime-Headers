/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemUpdateOutcome.h>

@class NSMutableDictionary, NSDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome {

	NSMutableDictionary* _mutableResults;

}

@property (nonatomic,retain) NSMutableDictionary * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,retain) NSDictionary * results; 
@property (assign,nonatomic) unsigned long long outcomeType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)mutableResults;
-(void)setMutableResults:(NSMutableDictionary *)arg1 ;
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(void)addResultsFromDictionary:(id)arg1 ;
-(void)safeSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)addResultsFromOutcome:(id)arg1 ;
@end

