/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SpringBoardHome/SBLeafIcon.h>

@class SFSearchResult, SearchUIAppIconImage;

@interface SearchUIAppIcon : SBLeafIcon {

	SFSearchResult* _searchResult;
	unsigned long long _variant;
	SearchUIAppIconImage* _iconImage;

}

@property (nonatomic,readonly) SFSearchResult * searchResult;               //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) unsigned long long variant;                  //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) SearchUIAppIconImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
+(BOOL)canGenerateIconsInBackground;
+(BOOL)isPlaceholderIcon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)variant;
-(id)uniqueIdentifier;
-(SearchUIAppIconImage *)iconImage;
-(SFSearchResult *)searchResult;
-(void)setIconImage:(SearchUIAppIconImage *)arg1 ;
-(id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1 ;
-(void)iconDidChange;
@end

