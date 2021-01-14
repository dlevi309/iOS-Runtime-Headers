/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings, NSArray;

@interface _CDCachedPeopleSuggestion : NSObject {

	NSDate* _date;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	NSArray* _suggestions;

}

@property (retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) NSArray * suggestions;                              //@synthesize suggestions=_suggestions - In the implementation block
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(_CDPeopleSuggesterContext *)context;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(_CDPeopleSuggesterSettings *)settings;
-(NSDate *)date;
-(BOOL)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3 ;
-(BOOL)isValidForContext:(id)arg1 ;
-(BOOL)isValidForSettings:(id)arg1 ;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
@end

