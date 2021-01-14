/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/


@class NSMutableDictionary;

@interface _AXTableViewInternal : NSObject {

	NSMutableDictionary* _children;
	NSMutableDictionary* _indexMap;
	NSMutableDictionary* _sectionHeaders;
	NSMutableDictionary* _sectionFooters;
	BOOL _reusableCellsEnabled;
	BOOL _searchTableViewVisible;
	BOOL _searchControllerDimmingViewVisible;
	long long _accessibleElementCount;

}

@property (assign,nonatomic) BOOL reusableCellsEnabled;                            //@synthesize reusableCellsEnabled=_reusableCellsEnabled - In the implementation block
@property (assign,nonatomic) BOOL searchTableViewVisible;                          //@synthesize searchTableViewVisible=_searchTableViewVisible - In the implementation block
@property (assign,nonatomic) BOOL searchControllerDimmingViewVisible;              //@synthesize searchControllerDimmingViewVisible=_searchControllerDimmingViewVisible - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;                     //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * indexMap;                     //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sectionHeaders;               //@synthesize sectionHeaders=_sectionHeaders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sectionFooters;               //@synthesize sectionFooters=_sectionFooters - In the implementation block
@property (assign,nonatomic) long long accessibleElementCount;                     //@synthesize accessibleElementCount=_accessibleElementCount - In the implementation block
-(NSMutableDictionary *)children;
-(id)init;
-(NSMutableDictionary *)sectionHeaders;
-(BOOL)searchControllerDimmingViewVisible;
-(void)setSearchControllerDimmingViewVisible:(BOOL)arg1 ;
-(BOOL)searchTableViewVisible;
-(void)setSearchTableViewVisible:(BOOL)arg1 ;
-(long long)accessibleElementCount;
-(void)setAccessibleElementCount:(long long)arg1 ;
-(NSMutableDictionary *)indexMap;
-(BOOL)reusableCellsEnabled;
-(void)setReusableCellsEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)sectionFooters;
@end
