/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSSet;

@interface CPLScopeFilter : NSObject {

	NSSet* _includedScopeIdentifiers;
	NSSet* _excludedScopeIdentifiers;

}

@property (nonatomic,readonly) NSSet * includedScopeIdentifiers;              //@synthesize includedScopeIdentifiers=_includedScopeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * excludedScopeIdentifiers;              //@synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers - In the implementation block
-(id)description;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg1 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg1 ;
-(id)initWithExcludedScopeIdentifiers:(id)arg1 ;
-(BOOL)filterOnScopeIdentifier:(id)arg1 ;
-(NSSet *)includedScopeIdentifiers;
-(NSSet *)excludedScopeIdentifiers;
@end

