/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(unsigned long long)assetCount;
-(long long)categoryAtIndex:(long long)arg1 ;
-(NSString *)keyAssetUUID;
-(unsigned long long)categoryMask;
-(NSString *)groupDescription;
-(PSIGroupResult *)groupResult;
-(id)initWithGroupResult:(id)arg1 ;
-(NSString *)transientToken;
-(NSArray *)searchTokens;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSArray *)matchRanges;
-(NSString *)owningContentString;
-(unsigned long long)groupCount;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(BOOL)isImplicitlyTokenized;
@end

