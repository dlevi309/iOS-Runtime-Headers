/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSDictionary;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying> {

	NSArray* _results;
	unsigned long long _maxInitiallyVisibleResults;
	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _moreText;
	double _rankingScore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long maxInitiallyVisibleResults;              //@synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * moreText;                                          //@synthesize moreText=_moreText - In the implementation block
@property (assign,nonatomic) double rankingScore;                                        //@synthesize rankingScore=_rankingScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)results;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(double)rankingScore;
-(unsigned long long)maxInitiallyVisibleResults;
-(void)setMaxInitiallyVisibleResults:(unsigned long long)arg1 ;
-(NSString *)moreText;
-(void)setMoreText:(NSString *)arg1 ;
-(void)setRankingScore:(double)arg1 ;
@end

