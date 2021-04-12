/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, NSArray;

@interface MKLocalSearchKeypressMetrics : NSObject {

	NSString* _query;
	NSArray* _queryTokens;
	NSArray* _suggestionEntries;

}

@property (nonatomic,copy,readonly) NSString * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryTokens;               //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionEntries;              //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
-(NSString *)query;
-(NSArray *)queryTokens;
-(NSArray *)suggestionEntries;
-(id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 ;
-(void)submitWithStatus:(unsigned long long)arg1 ;
@end

