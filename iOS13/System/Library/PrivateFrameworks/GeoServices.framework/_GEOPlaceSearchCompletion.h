/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, GEOAutocompleteSessionData, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {

	NSArray* _groups;
	GEOAutocompleteSessionData* _sessionData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) GEOAutocompleteSessionData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
-(NSArray *)groups;
-(id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4 ;
-(GEOAutocompleteSessionData *)sessionData;
@end

