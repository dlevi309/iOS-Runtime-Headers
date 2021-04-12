/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SFSearchResult;

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying> {

	NSArray* _results;
	unsigned long long _triggerEvent;
	SFSearchResult* _goTakeoverResult;

}

@property (nonatomic,copy) NSArray * results;                                //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;                //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (nonatomic,retain) SFSearchResult * goTakeoverResult;              //@synthesize goTakeoverResult=_goTakeoverResult - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id)description;
-(void)setGoTakeoverResult:(SFSearchResult *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFSearchResult *)goTakeoverResult;
@end

