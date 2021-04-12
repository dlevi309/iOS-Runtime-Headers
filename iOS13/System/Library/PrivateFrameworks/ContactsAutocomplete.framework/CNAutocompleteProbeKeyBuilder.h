/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class NSString, NSArray;

@interface CNAutocompleteProbeKeyBuilder : NSObject {

	NSString* _key;
	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)builderWithKey:(id)arg1 ;
-(id)init;
-(NSString *)key;
-(id)initWithKey:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)build;
-(id)prediction;
-(NSArray *)prefixes;
-(NSArray *)suffixes;
-(void)setSuffixes:(NSArray *)arg1 ;
-(void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(id)addDuetReturnedResults:(BOOL)arg1 ;
-(id)addBatchIndex:(unsigned long long)arg1 ;
-(id)prefixedSearch;
-(id)addDuetModelID;
@end

