/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSArray* _shortcutsForHome;
	NSArray* _shortcutsForWork;
	NSArray* _hiddenShortcutsForHome;
	NSArray* _hiddenShortcutsForWork;
	NSArray* _shortcutsForAll;
	NSArray* _mapItemsForHome;
	NSArray* _mapItemsForWork;
	NSArray* _mapItemsForAll;

}

@property (nonatomic,readonly) NSArray * shortcutsForHome;                    //@synthesize shortcutsForHome=_shortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForWork;                    //@synthesize shortcutsForWork=_shortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForHome;              //@synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForWork;              //@synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForAll;                     //@synthesize shortcutsForAll=_shortcutsForAll - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForHome;                     //@synthesize mapItemsForHome=_mapItemsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForWork;                     //@synthesize mapItemsForWork=_mapItemsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForAll;                      //@synthesize mapItemsForAll=_mapItemsForAll - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrected;                             //@synthesize hasCorrected=_hasCorrected - In the implementation block
@property (nonatomic,readonly) BOOL hasGeocoded;                              //@synthesize hasGeocoded=_hasGeocoded - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeOrWork;                            //@synthesize hasHomeOrWork=_hasHomeOrWork - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCorrected;
-(id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(BOOL)arg3 hasGeocoded:(BOOL)arg4 ;
-(BOOL)hasHomeOrWork;
-(BOOL)isEqualToMeCard:(id)arg1 ;
-(id)shortcutForCNPostalAddressIdentifier:(id)arg1 ;
-(NSArray *)shortcutsForAll;
-(id)shortcutsPerCNPostalAddress;
-(BOOL)hasGeocoded;
-(id)initWithHomes:(id)arg1 works:(id)arg2 hiddenHomes:(id)arg3 hiddenWorks:(id)arg4 all:(id)arg5 perCNPostalAddress:(id)arg6 hasCorrect:(BOOL)arg7 hasGeocoded:(BOOL)arg8 ;
-(id)initWithShortcuts:(id)arg1 hasCorrected:(BOOL)arg2 hasGeocoded:(BOOL)arg3 ;
-(NSArray *)shortcutsForHome;
-(NSArray *)shortcutsForWork;
-(NSArray *)hiddenShortcutsForHome;
-(NSArray *)hiddenShortcutsForWork;
-(NSArray *)mapItemsForHome;
-(NSArray *)mapItemsForWork;
-(NSArray *)mapItemsForAll;
@end

