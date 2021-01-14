/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, GEOAutocompleteSessionData, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {

	NSArray* _groups;
	GEOAutocompleteSessionData* _sessionData;

}

@property (nonatomic,readonly) NSArray * groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) GEOAutocompleteSessionData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)groups;
-(GEOAutocompleteSessionData *)sessionData;
-(id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4 ;
@end

