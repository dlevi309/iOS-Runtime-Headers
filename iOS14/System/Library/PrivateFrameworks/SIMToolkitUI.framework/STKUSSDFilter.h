/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@class NSArray;

@interface STKUSSDFilter : NSObject {

	NSArray* _alwaysFilteredPatterns;
	NSArray* _sometimesFilteredPatterns;
	double _lastWarningTime;

}

@property (nonatomic,copy,readonly) NSArray * alwaysFilteredPatterns;                 //@synthesize alwaysFilteredPatterns=_alwaysFilteredPatterns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sometimesFilteredPatterns;              //@synthesize sometimesFilteredPatterns=_sometimesFilteredPatterns - In the implementation block
@property (assign,nonatomic) double lastWarningTime;                                  //@synthesize lastWarningTime=_lastWarningTime - In the implementation block
+(id)cachedExpressions;
-(void)setLastWarningTime:(double)arg1 ;
-(NSArray *)sometimesFilteredPatterns;
-(NSArray *)alwaysFilteredPatterns;
-(id)_matchesInString:(id)arg1 forPattern:(id)arg2 ;
-(id)initWithAlwaysFilteredPatterns:(id)arg1 sometimesFilteredPatterns:(id)arg2 ;
-(void)reset;
-(BOOL)shouldFilterString:(id)arg1 coalescable:(BOOL*)arg2 ;
-(double)lastWarningTime;
@end

