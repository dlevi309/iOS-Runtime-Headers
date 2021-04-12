/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol GEOServerFormattedString;
@class NSArray;

@interface MNTransitInstruction : NSObject {

	BOOL _hideTimeInstructionsWhenCollapsed;
	long long _context;
	NSArray* _majorFormattedInstruction;
	NSArray* _minorFormattedInstruction;
	NSArray* _tertiaryFormattedInstruction;
	id<GEOServerFormattedString> _departureBarInstruction;
	long long _departureBarStyle;
	id<GEOServerFormattedString> _countStopsFormattedString;
	id<GEOServerFormattedString> _expandableListFormattedString;
	id<GEOServerFormattedString> _primaryTimeInstruction;
	id<GEOServerFormattedString> _secondaryTimeinstruction;

}

@property (nonatomic,copy) NSArray * majorFormattedInstruction;                                       //@synthesize majorFormattedInstruction=_majorFormattedInstruction - In the implementation block
@property (nonatomic,copy) NSArray * minorFormattedInstruction;                                       //@synthesize minorFormattedInstruction=_minorFormattedInstruction - In the implementation block
@property (nonatomic,copy) NSArray * tertiaryFormattedInstruction;                                    //@synthesize tertiaryFormattedInstruction=_tertiaryFormattedInstruction - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> departureBarInstruction;                    //@synthesize departureBarInstruction=_departureBarInstruction - In the implementation block
@property (assign,nonatomic) long long departureBarStyle;                                             //@synthesize departureBarStyle=_departureBarStyle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> countStopsFormattedString;                  //@synthesize countStopsFormattedString=_countStopsFormattedString - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> expandableListFormattedString;              //@synthesize expandableListFormattedString=_expandableListFormattedString - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> primaryTimeInstruction;                     //@synthesize primaryTimeInstruction=_primaryTimeInstruction - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> secondaryTimeinstruction;                   //@synthesize secondaryTimeinstruction=_secondaryTimeinstruction - In the implementation block
@property (assign,nonatomic) BOOL hideTimeInstructionsWhenCollapsed;                                  //@synthesize hideTimeInstructionsWhenCollapsed=_hideTimeInstructionsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) long long context;                                                     //@synthesize context=_context - In the implementation block
+(id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(long long)arg2 ;
-(long long)context;
-(id)initWithContext:(long long)arg1 ;
-(id)instructionSet;
-(long long)departureBarStyle;
-(void)setDepartureBarStyle:(long long)arg1 ;
-(id<GEOServerFormattedString>)countStopsFormattedString;
-(id<GEOServerFormattedString>)expandableListFormattedString;
-(id)instructionSetsForInstructionType:(long long)arg1 ;
-(void)setMajorFormattedInstruction:(NSArray *)arg1 ;
-(void)setMinorFormattedInstruction:(NSArray *)arg1 ;
-(void)setTertiaryFormattedInstruction:(NSArray *)arg1 ;
-(void)setDepartureBarInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setCountStopsFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(void)setExpandableListFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(void)setPrimaryTimeInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setSecondaryTimeinstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setHideTimeInstructionsWhenCollapsed:(BOOL)arg1 ;
-(id)overridenInstructionsMapping;
-(NSArray *)majorFormattedInstruction;
-(NSArray *)minorFormattedInstruction;
-(NSArray *)tertiaryFormattedInstruction;
-(id<GEOServerFormattedString>)primaryTimeInstruction;
-(id<GEOServerFormattedString>)secondaryTimeinstruction;
-(void)_fillInInstructions;
-(void)refreshInstructionStrings;
-(id)formattedInstructionForType:(long long)arg1 ;
-(id<GEOServerFormattedString>)departureBarInstruction;
-(BOOL)hideTimeInstructionsWhenCollapsed;
@end

