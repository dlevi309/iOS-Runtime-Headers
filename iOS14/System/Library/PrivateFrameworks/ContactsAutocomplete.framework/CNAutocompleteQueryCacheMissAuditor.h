/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLogger:(id)arg1 ;
-(id)description;
-(void)setLogger:(CNAutocompleteQueryCacheMissLogger *)arg1 ;
-(CNAutocompleteQueryCacheMissLogger *)logger;
-(void)setCachedResults:(NSArray *)arg1 ;
-(NSArray *)cachedResults;
-(void)didReturnCachedResults:(id)arg1 ;
-(void)didReturnLiveResults:(id)arg1 ;
@end

