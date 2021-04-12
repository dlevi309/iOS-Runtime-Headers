/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(SCD_Struct_PS23*)arg2 count:(long long)arg3 ;
-(void)setCollectionIds:(CFArrayRef)arg1 ;
-(CFArrayRef)collectionIds;
-(void)setCategory:(short)arg1 ;
-(id)init;
-(unsigned long long)groupId;
-(id)_tokenRangesDescription;
-(long long)compareToGroup:(id)arg1 ;
-(id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4 ;
-(unsigned long long)tokenRangesCount;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)prepareFromFilenameStatement:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)groupIdForObjectLookup;
-(void)unionIdsWithGroup:(id)arg1 ;
-(void)unionCollectionIdsWithGroup:(id)arg1 ;
-(void)setOwningGroupId:(unsigned long long)arg1 ;
-(NSString *)contentString;
-(NSString *)normalizedString;
-(NSString *)lookupIdentifier;
-(short)category;
-(void)prepareForReuse;
-(id)description;
-(void)setGroupId:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(unsigned long long)owningGroupId;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

