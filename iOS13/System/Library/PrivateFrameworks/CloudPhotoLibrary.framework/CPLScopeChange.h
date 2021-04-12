/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDate, NSData, CPLEngineScope, CPLScopedIdentifier, NSString;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	BOOL _disabled;
	long long _scopeType;
	NSDictionary* _assetCountPerType;
	NSDate* _disabledDate;
	NSDate* _deleteDate;
	NSData* _accountFlagsData;
	unsigned long long _pullTaskItem;
	CPLEngineScope* _scope;

}

@property (assign,nonatomic) long long scopeType;                               //@synthesize scopeType=_scopeType - In the implementation block
@property (nonatomic,copy) NSDictionary * assetCountPerType;                    //@synthesize assetCountPerType=_assetCountPerType - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                   //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSDate * disabledDate;                             //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,retain) NSDate * deleteDate;                               //@synthesize deleteDate=_deleteDate - In the implementation block
@property (nonatomic,copy) NSData * accountFlagsData;                           //@synthesize accountFlagsData=_accountFlagsData - In the implementation block
@property (assign,nonatomic) unsigned long long pullTaskItem;                   //@synthesize pullTaskItem=_pullTaskItem - In the implementation block
@property (nonatomic,retain) CPLEngineScope * scope;                            //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * recordModificationDate; 
+(BOOL)supportsSecureCoding;
+(id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
+(id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
+(id)descriptionForScopeType:(long long)arg1 ;
+(id)mappingForScopeTypeDescription;
+(Class)scopeChangeClassForType:(long long)arg1 ;
+(BOOL)shouldAutoActivateScopeWithType:(long long)arg1 ;
+(long long)defaultFlagsForScopeType:(long long)arg1 ;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDisabled;
-(CPLEngineScope *)scope;
-(void)setScope:(CPLEngineScope *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)scopeIdentifier;
-(id)accountFlags;
-(long long)scopeType;
-(id)_scopedIdentifier;
-(NSDictionary *)assetCountPerType;
-(void)_setChangeType:(unsigned long long)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
-(void)setScopeType:(long long)arg1 ;
-(void)setAssetCountPerType:(NSDictionary *)arg1 ;
-(NSDate *)disabledDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(NSDate *)deleteDate;
-(void)setDeleteDate:(NSDate *)arg1 ;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(unsigned long long)pullTaskItem;
-(void)setPullTaskItem:(unsigned long long)arg1 ;
-(void)_setupWithLibraryInfo:(id)arg1 ;
-(void)_setupWithLibraryState:(id)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 libraryInfo:(id)arg3 state:(id)arg4 ;
-(id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(BOOL*)arg2 ;
@end

