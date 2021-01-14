/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, NSArray, NSDictionary;

@interface PXNewSearchResultsSection : NSObject {

	BOOL _expanded;
	NSString* _identifier;
	NSString* _title;
	unsigned long long _type;
	NSArray* _results;
	NSArray* _visibleResultIdentifiers;
	NSDictionary* _identifierToResultMap;

}

@property (nonatomic,copy) NSArray * visibleResultIdentifiers;                //@synthesize visibleResultIdentifiers=_visibleResultIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * identifierToResultMap;              //@synthesize identifierToResultMap=_identifierToResultMap - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                 //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) BOOL isExpandable; 
@property (nonatomic,readonly) NSArray * results;                             //@synthesize results=_results - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(NSArray *)results;
-(long long)compare:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 results:(id)arg2 ;
-(void)_updateVisibleResultIdentifiers;
-(unsigned long long)_expandedVisibleResultCount;
-(unsigned long long)_collapsedVisibleResultCount;
-(id)_identifiersForResults:(id)arg1 ;
-(id)searchResultForIdentifier:(id)arg1 ;
-(id)_titleForSectionType:(unsigned long long)arg1 ;
-(id)_identifierToResultMapWithResults:(id)arg1 ;
-(NSArray *)visibleResultIdentifiers;
-(void)setVisibleResultIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)identifierToResultMap;
-(void)setIdentifierToResultMap:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(id)_stringForType:(unsigned long long)arg1 ;
-(BOOL)isExpandable;
-(unsigned long long)_sortOrder;
-(NSString *)title;
@end

