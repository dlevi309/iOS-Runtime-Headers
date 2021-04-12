/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface _PSSiriHandleRankerPredictionContext : NSObject <NSSecureCoding> {

	NSDate* _suggestionDate;
	NSArray* _bundleIds;
	long long _domain;

}

@property (nonatomic,copy) NSDate * suggestionDate;              //@synthesize suggestionDate=_suggestionDate - In the implementation block
@property (nonatomic,copy) NSArray * bundleIds;                  //@synthesize bundleIds=_bundleIds - In the implementation block
@property (assign) long long domain;                             //@synthesize domain=_domain - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)suggestionDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(long long)domain;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleIds:(NSArray *)arg1 ;
-(NSArray *)bundleIds;
@end

