/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject {

	GEOPDResolvedItem* _resolvedItem;

}

@property (nonatomic,readonly) BOOL hasResultIndex; 
@property (nonatomic,readonly) unsigned long long resultIndex; 
@property (nonatomic,readonly) NSString * extractedTerm; 
@property (nonatomic,readonly) int itemType; 
-(NSString *)extractedTerm;
-(unsigned long long)resultIndex;
-(BOOL)hasResultIndex;
-(id)initWithResolvedItem:(id)arg1 ;
-(id)initWithAutocompleteResolvedItem:(id)arg1 ;
-(int)itemType;
@end

