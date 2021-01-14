/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)resultIndex;
-(int)itemType;
-(NSString *)extractedTerm;
-(BOOL)hasResultIndex;
-(id)initWithResolvedItem:(id)arg1 ;
-(id)initWithAutocompleteResolvedItem:(id)arg1 ;
@end

