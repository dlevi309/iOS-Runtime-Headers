/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompletePerformanceProbe.h>

@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe> {

	CNAutocompleteAggdProbe* _aggdProbe;
	NSMutableDictionary* _pendingAddData;

}

@property (nonatomic,retain) CNAutocompleteAggdProbe * aggdProbe;                 //@synthesize aggdProbe=_aggdProbe - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingAddData;              //@synthesize pendingAddData=_pendingAddData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4 ;
-(void)sendData;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(id)initWithAggdProbe:(id)arg1 ;
-(NSMutableDictionary *)pendingAddData;
-(void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3 ;
-(CNAutocompleteAggdProbe *)aggdProbe;
-(void)setAggdProbe:(CNAutocompleteAggdProbe *)arg1 ;
@end

