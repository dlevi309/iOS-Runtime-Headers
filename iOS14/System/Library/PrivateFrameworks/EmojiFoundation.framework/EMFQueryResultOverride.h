/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@class NSArray;

@interface EMFQueryResultOverride : NSObject {

	unsigned long long _overrideSearchType;
	unsigned long long _overrideBehavior;
	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideSearchType;              //@synthesize overrideSearchType=_overrideSearchType - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideBehavior;                //@synthesize overrideBehavior=_overrideBehavior - In the implementation block
-(NSArray *)results;
-(id)description;
-(unsigned long long)overrideBehavior;
-(unsigned long long)overrideSearchType;
-(id)initWithOverridesArray:(id)arg1 searchType:(unsigned long long)arg2 behavior:(unsigned long long)arg3 ;
@end

