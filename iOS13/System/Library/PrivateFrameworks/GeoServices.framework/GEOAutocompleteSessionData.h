/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(id)updateWithAutoCompleteSessionData:(id)arg1 ;
-(id)initWithAutoCompleteSessionData:(id)arg1 ;
@end

