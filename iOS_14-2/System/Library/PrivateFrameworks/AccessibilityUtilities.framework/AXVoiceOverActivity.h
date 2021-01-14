/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, NSSet, NSNumber;

@interface AXVoiceOverActivity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _builtIn;
	NSString* _name;
	NSUUID* _uuid;
	NSSet* _textualContexts;
	NSSet* _appIdentifiers;
	NSUUID* _punctuationGroup;
	NSNumber* _tableHeaders;
	NSNumber* _tableRowAndColumn;
	NSNumber* _speakEmojis;
	NSNumber* _containerFeedback;
	NSNumber* _imageDescriptions;
	NSNumber* _hints;
	NSString* _voiceIdentifier;
	NSNumber* _speechRate;
	NSNumber* _volume;
	NSNumber* _speechMuted;
	NSNumber* _soundMuted;
	NSNumber* _audioDucking;
	NSNumber* _modifierKeys;
	NSNumber* _brailleStatusCellGeneral;
	NSNumber* _brailleStatusCellText;
	NSString* _brailleTable;
	NSNumber* _brailleOutput;
	NSNumber* _brailleInput;
	NSNumber* _brailleAutoAdvanceDuration;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSSet * textualContexts;                            //@synthesize textualContexts=_textualContexts - In the implementation block
@property (nonatomic,retain) NSSet * appIdentifiers;                             //@synthesize appIdentifiers=_appIdentifiers - In the implementation block
@property (nonatomic,retain) NSUUID * punctuationGroup;                          //@synthesize punctuationGroup=_punctuationGroup - In the implementation block
@property (nonatomic,retain) NSNumber * tableHeaders;                            //@synthesize tableHeaders=_tableHeaders - In the implementation block
@property (nonatomic,retain) NSNumber * tableRowAndColumn;                       //@synthesize tableRowAndColumn=_tableRowAndColumn - In the implementation block
@property (nonatomic,retain) NSNumber * speakEmojis;                             //@synthesize speakEmojis=_speakEmojis - In the implementation block
@property (nonatomic,retain) NSNumber * containerFeedback;                       //@synthesize containerFeedback=_containerFeedback - In the implementation block
@property (nonatomic,retain) NSNumber * imageDescriptions;                       //@synthesize imageDescriptions=_imageDescriptions - In the implementation block
@property (nonatomic,retain) NSNumber * hints;                                   //@synthesize hints=_hints - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                         //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * speechRate;                              //@synthesize speechRate=_speechRate - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                                  //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSNumber * speechMuted;                             //@synthesize speechMuted=_speechMuted - In the implementation block
@property (nonatomic,retain) NSNumber * soundMuted;                              //@synthesize soundMuted=_soundMuted - In the implementation block
@property (nonatomic,retain) NSNumber * audioDucking;                            //@synthesize audioDucking=_audioDucking - In the implementation block
@property (nonatomic,retain) NSNumber * modifierKeys;                            //@synthesize modifierKeys=_modifierKeys - In the implementation block
@property (nonatomic,retain) NSNumber * brailleStatusCellGeneral;                //@synthesize brailleStatusCellGeneral=_brailleStatusCellGeneral - In the implementation block
@property (nonatomic,retain) NSNumber * brailleStatusCellText;                   //@synthesize brailleStatusCellText=_brailleStatusCellText - In the implementation block
@property (nonatomic,retain) NSString * brailleTable;                            //@synthesize brailleTable=_brailleTable - In the implementation block
@property (nonatomic,retain) NSNumber * brailleOutput;                           //@synthesize brailleOutput=_brailleOutput - In the implementation block
@property (nonatomic,retain) NSNumber * brailleInput;                            //@synthesize brailleInput=_brailleInput - In the implementation block
@property (nonatomic,retain) NSNumber * brailleAutoAdvanceDuration;              //@synthesize brailleAutoAdvanceDuration=_brailleAutoAdvanceDuration - In the implementation block
@property (assign,nonatomic) BOOL builtIn;                                       //@synthesize builtIn=_builtIn - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)observerKeys;
-(NSNumber *)hints;
-(NSUUID *)uuid;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setHints:(NSNumber *)arg1 ;
-(BOOL)builtIn;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)textualContexts;
-(NSSet *)appIdentifiers;
-(NSUUID *)punctuationGroup;
-(NSString *)voiceIdentifier;
-(NSNumber *)speechRate;
-(NSNumber *)soundMuted;
-(NSNumber *)audioDucking;
-(NSNumber *)modifierKeys;
-(NSString *)brailleTable;
-(NSNumber *)brailleStatusCellGeneral;
-(NSNumber *)brailleStatusCellText;
-(NSNumber *)tableHeaders;
-(NSNumber *)tableRowAndColumn;
-(NSNumber *)speakEmojis;
-(NSNumber *)imageDescriptions;
-(NSNumber *)containerFeedback;
-(NSNumber *)brailleOutput;
-(NSNumber *)brailleInput;
-(NSNumber *)brailleAutoAdvanceDuration;
-(void)setTextualContexts:(NSSet *)arg1 ;
-(void)setAppIdentifiers:(NSSet *)arg1 ;
-(void)setPunctuationGroup:(NSUUID *)arg1 ;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)setSpeechRate:(NSNumber *)arg1 ;
-(void)setSoundMuted:(NSNumber *)arg1 ;
-(void)setSpeechMuted:(NSNumber *)arg1 ;
-(void)setAudioDucking:(NSNumber *)arg1 ;
-(void)setModifierKeys:(NSNumber *)arg1 ;
-(void)setBrailleStatusCellGeneral:(NSNumber *)arg1 ;
-(void)setBrailleStatusCellText:(NSNumber *)arg1 ;
-(void)setBrailleTable:(NSString *)arg1 ;
-(void)setSpeakEmojis:(NSNumber *)arg1 ;
-(void)setImageDescriptions:(NSNumber *)arg1 ;
-(void)setContainerFeedback:(NSNumber *)arg1 ;
-(void)setTableRowAndColumn:(NSNumber *)arg1 ;
-(void)setTableHeaders:(NSNumber *)arg1 ;
-(void)setBrailleOutput:(NSNumber *)arg1 ;
-(void)setBrailleInput:(NSNumber *)arg1 ;
-(void)setBrailleAutoAdvanceDuration:(NSNumber *)arg1 ;
-(BOOL)identicalProperty:(id)arg1 property2:(id)arg2 ;
-(BOOL)isIdenticalTo:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSNumber *)volume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)speechMuted;
-(void)setBuiltIn:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

