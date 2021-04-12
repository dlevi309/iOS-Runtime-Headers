/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {

	GEOSessionID _analyticsShortSessionId;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;

}

@property (nonatomic,readonly) GEOPDAutocompleteSessionData * autocompleteSessionData;              //@synthesize autocompleteSessionData=_autocompleteSessionData - In the implementation block
-(id)init;
-(id)initWithAutoCompleteSessionData:(id)arg1 ;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(id)updateWithAutoCompleteSessionData:(id)arg1 ;
@end

