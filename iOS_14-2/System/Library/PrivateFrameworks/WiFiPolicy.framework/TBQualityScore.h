/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBScore.h>

@class NSString;

@interface TBQualityScore : NSObject <TBScore> {

	unsigned long long _score;
	NSString* _typeDescription;

}

@property (nonatomic,retain) NSString * typeDescription;              //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) unsigned long long score;                //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)qualityScoreWithValue:(unsigned long long)arg1 ;
-(unsigned long long)score;
-(id)initWithValue:(unsigned long long)arg1 ;
-(void)setScore:(unsigned long long)arg1 ;
-(void)setTypeDescription:(NSString *)arg1 ;
-(NSString *)typeDescription;
@end

