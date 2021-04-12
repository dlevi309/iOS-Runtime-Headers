/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MapsSuggestionsMeCard : NSObject <NSCopying> {

	NSDictionary* _perCNPostalAddress;
	BOOL _hasCorrected;
	BOOL _hasGeocoded;
	BOOL _hasHomeOrWork;
	BOOL _hasHomeOrWorkOrSchool;
	NSArray* _shortcutsForHome;
	NSArray* _shortcutsForWork;
	NSArray* _shortcutsForSchool;
	NSArray* _hiddenShortcutsForHome;
	NSArray* _hiddenShortcutsForWork;
	NSArray* _hiddenShortcutsForSchool;
	NSArray* _shortcutsForAll;
	NSArray* _shortcutsForAllIncludingHidden;
	NSArray* _mapItemsForHome;
	NSArray* _mapItemsForWork;
	NSArray* _mapItemsForSchool;
	NSArray* _mapItemsForAll;

}

@property (nonatomic,readonly) NSArray * shortcutsForHome;                            //@synthesize shortcutsForHome=_shortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForWork;                            //@synthesize shortcutsForWork=_shortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForSchool;                          //@synthesize shortcutsForSchool=_shortcutsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForHome;                      //@synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForWork;                      //@synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForSchool;                    //@synthesize hiddenShortcutsForSchool=_hiddenShortcutsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForAll;                             //@synthesize shortcutsForAll=_shortcutsForAll - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForAllIncludingHidden;              //@synthesize shortcutsForAllIncludingHidden=_shortcutsForAllIncludingHidden - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForHome;                             //@synthesize mapItemsForHome=_mapItemsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForWork;                             //@synthesize mapItemsForWork=_mapItemsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForSchool;                           //@synthesize mapItemsForSchool=_mapItemsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForAll;                              //@synthesize mapItemsForAll=_mapItemsForAll - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrected;                                     //@synthesize hasCorrected=_hasCorrected - In the implementation block
@property (nonatomic,readonly) BOOL hasGeocoded;                                      //@synthesize hasGeocoded=_hasGeocoded - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeOrWork;                                    //@synthesize hasHomeOrWork=_hasHomeOrWork - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeOrWorkOrSchool;                            //@synthesize hasHomeOrWorkOrSchool=_hasHomeOrWorkOrSchool - In the implementation block
-(BOOL)hasCorrected;
-(id)description;
-(BOOL)isEqualToMeCard:(id)arg1 ;
-(BOOL)hasHomeOrWorkOrSchool;
-(id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(BOOL)arg3 hasGeocoded:(BOOL)arg4 ;
-(id)shortcutForCNPostalAddressIdentifier:(id)arg1 ;
-(NSArray *)shortcutsForAll;
-(BOOL)hasGeocoded;
-(id)shortcutsPerCNPostalAddress;
-(NSArray *)shortcutsForAllIncludingHidden;
-(id)initWithShortcuts:(id)arg1 hasCorrected:(BOOL)arg2 hasGeocoded:(BOOL)arg3 ;
-(NSArray *)shortcutsForHome;
-(NSArray *)shortcutsForWork;
-(NSArray *)shortcutsForSchool;
-(NSArray *)hiddenShortcutsForHome;
-(NSArray *)hiddenShortcutsForWork;
-(NSArray *)hiddenShortcutsForSchool;
-(NSArray *)mapItemsForHome;
-(NSArray *)mapItemsForWork;
-(NSArray *)mapItemsForSchool;
-(NSArray *)mapItemsForAll;
-(BOOL)hasHomeOrWork;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

