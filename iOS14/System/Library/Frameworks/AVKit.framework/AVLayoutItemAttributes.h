/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVLayoutItemAttributes : NSObject <NSCopying> {

	BOOL _hasFlexibleContentSize;
	BOOL _prefersSecondaryMaterialOverlay;
	BOOL _collapsed;
	BOOL _included;
	unsigned long long _displayPriority;
	AVLayoutItemAttributes* _displayPartnerAttributes;
	double _trailingInterItemSpace;
	NSString* _accessibilityIdentifier;
	AVLayoutItemAttributes* _nextAttributesInLayoutOrder;
	AVLayoutItemAttributes* _nextAttributesInPriorityOrder;
	NSString* _uniqueIdentifier;
	CGSize _minimumSize;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long displayPriority;                                         //@synthesize displayPriority=_displayPriority - In the implementation block
@property (__weak) AVLayoutItemAttributes * displayPartnerAttributes;                                    //@synthesize displayPartnerAttributes=_displayPartnerAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleContentSize;                                                //@synthesize hasFlexibleContentSize=_hasFlexibleContentSize - In the implementation block
@property (assign,nonatomic) BOOL prefersSecondaryMaterialOverlay;                                       //@synthesize prefersSecondaryMaterialOverlay=_prefersSecondaryMaterialOverlay - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                                                         //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                            //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) double trailingInterItemSpace;                                              //@synthesize trailingInterItemSpace=_trailingInterItemSpace - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                                           //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,retain) AVLayoutItemAttributes * nextAttributesInLayoutOrder;                       //@synthesize nextAttributesInLayoutOrder=_nextAttributesInLayoutOrder - In the implementation block
@property (assign,nonatomic,__weak) AVLayoutItemAttributes * nextAttributesInPriorityOrder;              //@synthesize nextAttributesInPriorityOrder=_nextAttributesInPriorityOrder - In the implementation block
-(BOOL)isCollapsed;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(unsigned long long)displayPriority;
-(id)init;
-(BOOL)isIncluded;
-(NSString *)uniqueIdentifier;
-(id)debugDescription;
-(void)setDisplayPriority:(unsigned long long)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(AVLayoutItemAttributes *)displayPartnerAttributes;
-(void)setDisplayPartnerAttributes:(AVLayoutItemAttributes *)arg1 ;
-(BOOL)hasFlexibleContentSize;
-(void)setHasFlexibleContentSize:(BOOL)arg1 ;
-(BOOL)prefersSecondaryMaterialOverlay;
-(void)setPrefersSecondaryMaterialOverlay:(BOOL)arg1 ;
-(double)trailingInterItemSpace;
-(void)setTrailingInterItemSpace:(double)arg1 ;
-(AVLayoutItemAttributes *)nextAttributesInLayoutOrder;
-(void)setNextAttributesInLayoutOrder:(AVLayoutItemAttributes *)arg1 ;
-(AVLayoutItemAttributes *)nextAttributesInPriorityOrder;
-(void)setNextAttributesInPriorityOrder:(AVLayoutItemAttributes *)arg1 ;
-(void)setIncluded:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(NSString *)accessibilityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

