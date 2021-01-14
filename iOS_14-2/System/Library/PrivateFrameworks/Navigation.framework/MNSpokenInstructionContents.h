/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNListInstructionContents.h>
#import <libobjc.A.dylib/MNInstructionContents.h>

@protocol GEOServerFormattedString;
@class NSArray, NSString;

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents> {

	SCD_Struct_MN17 _options;
	BOOL _isSecondary;
	id<GEOServerFormattedString> _proceedInstructionFormat;
	id<GEOServerFormattedString> _continueInstructionFormat;
	id<GEOServerFormattedString> _initialInstructionFormat;
	id<GEOServerFormattedString> _prepareInstructionFormat;
	NSArray* _executionInstructionFormats;

}

@property (nonatomic,retain) id<GEOServerFormattedString> proceedInstructionFormat;               //@synthesize proceedInstructionFormat=_proceedInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> continueInstructionFormat;              //@synthesize continueInstructionFormat=_continueInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> initialInstructionFormat;               //@synthesize initialInstructionFormat=_initialInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> prepareInstructionFormat;               //@synthesize prepareInstructionFormat=_prepareInstructionFormat - In the implementation block
@property (nonatomic,retain) NSArray * executionInstructionFormats;                               //@synthesize executionInstructionFormats=_executionInstructionFormats - In the implementation block
@property (assign,nonatomic) long long context; 
@property (nonatomic,readonly) int numSignsWanted; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(SCD_Struct_MN17*)arg4 isSecondary:(BOOL)arg5 ;
-(id)init;
-(long long)context;
-(id)description;
-(void)setContext:(long long)arg1 ;
-(void)_populateFromStep:(id)arg1 ;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)hasServerContent;
-(void)setProceedInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setContinueInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setInitialInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setPrepareInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setExecutionInstructionFormats:(NSArray *)arg1 ;
-(NSArray *)executionInstructionFormats;
-(id<GEOServerFormattedString>)proceedInstructionFormat;
-(id<GEOServerFormattedString>)continueInstructionFormat;
-(id<GEOServerFormattedString>)prepareInstructionFormat;
-(id<GEOServerFormattedString>)initialInstructionFormat;
-(id)_instructionsForFormats:(id)arg1 distance:(double)arg2 ;
-(int)numSignsWanted;
-(id)instructionWithShorterAlternatives:(id*)arg1 ;
@end

