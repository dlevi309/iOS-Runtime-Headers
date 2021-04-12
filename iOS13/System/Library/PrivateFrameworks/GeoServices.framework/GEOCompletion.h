/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

