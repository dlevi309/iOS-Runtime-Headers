/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSArray, NSSet;

@interface CalLogFilter : NSObject {

	int _minimumLevel;
	NSArray* _includes;
	NSArray* _excludes;
	NSArray* _includesAsRegexes;
	NSArray* _excludesAsRegexes;
	NSSet* _includesRegardlessOfLevel;

}

@property (nonatomic,retain) NSArray * includesAsRegexes;                  //@synthesize includesAsRegexes=_includesAsRegexes - In the implementation block
@property (nonatomic,retain) NSArray * excludesAsRegexes;                  //@synthesize excludesAsRegexes=_excludesAsRegexes - In the implementation block
@property (assign,nonatomic) int minimumLevel;                             //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (nonatomic,copy) NSArray * includes;                             //@synthesize includes=_includes - In the implementation block
@property (nonatomic,copy) NSArray * excludes;                             //@synthesize excludes=_excludes - In the implementation block
@property (nonatomic,copy) NSSet * includesRegardlessOfLevel;              //@synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel - In the implementation block
-(id)init;
-(id)description;
-(void)setMinimumLevel:(int)arg1 ;
-(void)setIncludesRegardlessOfLevel:(NSSet *)arg1 ;
-(BOOL)proceedProcessingLogName:(id)arg1 ;
-(NSSet *)includesRegardlessOfLevel;
-(int)minimumLevel;
-(NSArray *)includes;
-(NSArray *)excludes;
-(NSArray *)includesAsRegexes;
-(id)generateRegexesForPatterns:(id)arg1 ;
-(void)setIncludesAsRegexes:(NSArray *)arg1 ;
-(void)setExcludesAsRegexes:(NSArray *)arg1 ;
-(void)setIncludes:(NSArray *)arg1 ;
-(void)setExcludes:(NSArray *)arg1 ;
-(NSArray *)excludesAsRegexes;
@end

