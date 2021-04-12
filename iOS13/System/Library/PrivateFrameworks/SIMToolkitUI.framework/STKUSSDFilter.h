/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(BOOL)shouldFilterString:(id)arg1 coalescable:(BOOL*)arg2 ;
-(id)initWithAlwaysFilteredPatterns:(id)arg1 sometimesFilteredPatterns:(id)arg2 ;
-(NSArray *)alwaysFilteredPatterns;
-(id)_matchesInString:(id)arg1 forPattern:(id)arg2 ;
-(double)lastWarningTime;
-(NSArray *)sometimesFilteredPatterns;
-(void)setLastWarningTime:(double)arg1 ;
@end

