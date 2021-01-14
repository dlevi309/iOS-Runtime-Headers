/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, GEOAutocompleteSessionData;


@protocol GEOCompletion <NSObject>
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) GEOAutocompleteSessionData * sessionData; 
@required
-(NSArray *)groups;
-(GEOAutocompleteSessionData *)sessionData;

@end

