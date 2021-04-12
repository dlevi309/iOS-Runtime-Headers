/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PSIGroupResult, NSArray, NSString;

@interface PLSearchResult : NSObject {

	PSIGroupResult* _groupResult;

}

@property (nonatomic,readonly) PSIGroupResult * groupResult;                 //@synthesize groupResult=_groupResult - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long categoryMask; 
@property (nonatomic,readonly) NSArray * searchTokens; 
@property (nonatomic,readonly) NSArray * contentStrings; 
@property (nonatomic,readonly) NSArray * lookupIdentifiers; 
@property (nonatomic,readonly) NSArray * matchRanges; 
@property (nonatomic,readonly) NSString * transientToken; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) NSString * groupDescription; 
@property (readonly) NSString * owningContentString; 
-(unsigned long long)groupCount;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSArray *)matchRanges;
-(NSString *)owningContentString;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isImplicitlyTokenized;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(NSArray *)searchTokens;
-(long long)categoryAtIndex:(long long)arg1 ;
-(unsigned long long)assetCount;
-(unsigned long long)categoryMask;
-(NSString *)groupDescription;
-(PSIGroupResult *)groupResult;
-(id)initWithGroupResult:(id)arg1 ;
-(NSString *)keyAssetUUID;
-(NSString *)transientToken;
-(unsigned long long)type;
@end

