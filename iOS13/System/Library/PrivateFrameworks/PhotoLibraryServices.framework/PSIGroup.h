/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject {

	NSMutableString* _contentString;
	NSMutableString* _normalizedString;
	NSMutableString* _lookupIdentifier;
	unsigned long long _compressedRanges[2];
	NSRange _tokenRanges[8];
	unsigned long long _tokenRangesCount;
	short _category;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;
	CFArrayRef _assetIds;
	CFArrayRef _collectionIds;

}

@property (assign,nonatomic) unsigned long long groupId;                    //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (assign,nonatomic) short category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * contentString;                    //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,readonly) NSString * normalizedString;                 //@synthesize normalizedString=_normalizedString - In the implementation block
@property (nonatomic,readonly) NSString * lookupIdentifier;                 //@synthesize lookupIdentifier=_lookupIdentifier - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                           //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) CFArrayRef collectionIds;                      //@synthesize collectionIds=_collectionIds - In the implementation block
+(void)_getTokenRanges:(NSRange)arg1 fromCompressedRanges:(unsigned long long)arg2 ;
+(void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(SCD_Struct_PS21*)arg2 count:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(short)category;
-(void)setCategory:(short)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)groupId;
-(void)setGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)collectionIds;
-(void)setCollectionIds:(CFArrayRef)arg1 ;
-(NSString *)contentString;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4 ;
-(id)_tokenRangesDescription;
-(long long)compareToGroup:(id)arg1 ;
-(unsigned long long)tokenRangesCount;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)prepareFromFilenameStatement:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)groupIdForObjectLookup;
-(void)unionCollectionIdsWithGroup:(id)arg1 ;
-(void)unionIdsWithGroup:(id)arg1 ;
-(unsigned long long)owningGroupId;
-(void)setOwningGroupId:(unsigned long long)arg1 ;
-(NSString *)normalizedString;
-(NSString *)lookupIdentifier;
@end

