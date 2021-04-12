/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSArray;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _results;
	unsigned long long _outcomeType;

}

@property (assign,nonatomic) unsigned long long outcomeType;              //@synthesize outcomeType=_outcomeType - In the implementation block
@property (nonatomic,readonly) NSDictionary * results;                    //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
+(id)outcomeWithResults:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)allKeys;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)results;
-(id)initWithResults:(id)arg1 ;
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)outcomeType;
-(void)setOutcomeType:(unsigned long long)arg1 ;
@end

