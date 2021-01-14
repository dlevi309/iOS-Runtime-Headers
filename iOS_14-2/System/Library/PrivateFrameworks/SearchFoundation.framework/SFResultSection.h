/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSDictionary;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying> {

	BOOL _isInitiallyHidden;
	NSArray* _results;
	unsigned long long _maxInitiallyVisibleResults;
	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _moreText;
	double _rankingScore;

}

@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long maxInitiallyVisibleResults;              //@synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults - In the implementation block
@property (assign,nonatomic) BOOL isInitiallyHidden;                                     //@synthesize isInitiallyHidden=_isInitiallyHidden - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * moreText;                                          //@synthesize moreText=_moreText - In the implementation block
@property (assign,nonatomic) double rankingScore;                                        //@synthesize rankingScore=_rankingScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(NSArray *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)results;
-(unsigned long long)maxInitiallyVisibleResults;
-(id)init;
-(NSData *)jsonData;
-(void)setIsInitiallyHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setMoreText:(NSString *)arg1 ;
-(void)setRankingScore:(double)arg1 ;
-(BOOL)isInitiallyHidden;
-(BOOL)compareWithSection:(id)arg1 logger:(/*^block*/id)arg2 ;
-(NSString *)moreText;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setMaxInitiallyVisibleResults:(unsigned long long)arg1 ;
-(double)rankingScore;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

