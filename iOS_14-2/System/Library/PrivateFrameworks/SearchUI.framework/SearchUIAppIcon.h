/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SpringBoardHome/SBLeafIcon.h>

@protocol SBLeafIconDataSource;
@class SFSearchResult, SearchUIAppIconImage;

@interface SearchUIAppIcon : SBLeafIcon {

	id<SBLeafIconDataSource> _activeDataSourceForwarder;
	SFSearchResult* _searchResult;
	unsigned long long _variant;
	SearchUIAppIconImage* _iconImage;

}

@property (assign,nonatomic,__weak) id<SBLeafIconDataSource> activeDataSourceForwarder;              //@synthesize activeDataSourceForwarder=_activeDataSourceForwarder - In the implementation block
@property (nonatomic,readonly) SFSearchResult * searchResult;                                        //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) unsigned long long variant;                                           //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) SearchUIAppIconImage * iconImage;                                       //@synthesize iconImage=_iconImage - In the implementation block
+(BOOL)canGenerateIconsInBackground;
+(BOOL)isPlaceholderIcon;
-(SFSearchResult *)searchResult;
-(id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2 ;
-(SearchUIAppIconImage *)iconImage;
-(unsigned long long)variant;
-(id)uniqueIdentifier;
-(void)setActiveDataSourceForwarder:(id<SBLeafIconDataSource>)arg1 ;
-(id)activeDataSource;
-(void)iconDidChange;
-(void)setIconImage:(SearchUIAppIconImage *)arg1 ;
-(id<SBLeafIconDataSource>)activeDataSourceForwarder;
-(void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

