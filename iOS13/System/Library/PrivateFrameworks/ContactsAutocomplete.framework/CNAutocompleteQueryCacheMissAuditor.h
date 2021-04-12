/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNAutocompleteQueryCacheMissLogger, NSArray;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject {

	CNAutocompleteQueryCacheMissLogger* _logger;
	NSArray* _cachedResults;

}

@property (retain) CNAutocompleteQueryCacheMissLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (copy) NSArray * cachedResults;                                    //@synthesize cachedResults=_cachedResults - In the implementation block
-(id)init;
-(id)description;
-(CNAutocompleteQueryCacheMissLogger *)logger;
-(id)initWithLogger:(id)arg1 ;
-(void)setLogger:(CNAutocompleteQueryCacheMissLogger *)arg1 ;
-(void)didReturnCachedResults:(id)arg1 ;
-(void)didReturnLiveResults:(id)arg1 ;
-(NSArray *)cachedResults;
-(void)setCachedResults:(NSArray *)arg1 ;
@end

