/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _voiceIdentifier;
	NSNumber* _speechRate;
	NSNumber* _volume;
	NSNumber* _modifierKeys;
	NSNumber* _brailleStatusCellGeneral;
	NSNumber* _brailleStatusCellText;
	NSString* _brailleTable;
	NSNumber* _brailleOutput;
	NSNumber* _brailleInput;

}

@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSSet * textualContexts;                          //@synthesize textualContexts=_textualContexts - In the implementation block
@property (nonatomic,retain) NSSet * appIdentifiers;                           //@synthesize appIdentifiers=_appIdentifiers - In the implementation block
@property (nonatomic,retain) NSUUID * punctuationGroup;                        //@synthesize punctuationGroup=_punctuationGroup - In the implementation block
@property (nonatomic,retain) NSNumber * tableHeaders;                          //@synthesize tableHeaders=_tableHeaders - In the implementation block
@property (nonatomic,retain) NSNumber * tableRowAndColumn;                     //@synthesize tableRowAndColumn=_tableRowAndColumn - In the implementation block
@property (nonatomic,retain) NSNumber * speakEmojis;                           //@synthesize speakEmojis=_speakEmojis - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                       //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * speechRate;                            //@synthesize speechRate=_speechRate - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSNumber * modifierKeys;                          //@synthesize modifierKeys=_modifierKeys - In the implementation block
@property (nonatomic,retain) NSNumber * brailleStatusCellGeneral;              //@synthesize brailleStatusCellGeneral=_brailleStatusCellGeneral - In the implementation block
@property (nonatomic,retain) NSNumber * brailleStatusCellText;                 //@synthesize brailleStatusCellText=_brailleStatusCellText - In the implementation block
@property (nonatomic,retain) NSString * brailleTable;                          //@synthesize brailleTable=_brailleTable - In the implementation block
@property (nonatomic,retain) NSNumber * brailleOutput;                         //@synthesize brailleOutput=_brailleOutput - In the implementation block
@property (nonatomic,retain) NSNumber * brailleInput;                          //@synthesize brailleInput=_brailleInput - In the implementation block
@property (assign,nonatomic) BOOL builtIn;                                     //@synthesize builtIn=_builtIn - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)observerKeys;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(BOOL)builtIn;
-(NSSet *)textualContexts;
-(NSSet *)appIdentifiers;
-(NSUUID *)punctuationGroup;
-(NSString *)voiceIdentifier;
-(NSNumber *)speechRate;
-(NSNumber *)modifierKeys;
-(NSString *)brailleTable;
-(NSNumber *)brailleStatusCellGeneral;
-(NSNumber *)brailleStatusCellText;
-(NSNumber *)tableHeaders;
-(NSNumber *)tableRowAndColumn;
-(NSNumber *)speakEmojis;
-(NSNumber *)brailleOutput;
-(NSNumber *)brailleInput;
-(void)setTextualContexts:(NSSet *)arg1 ;
-(void)setAppIdentifiers:(NSSet *)arg1 ;
-(void)setPunctuationGroup:(NSUUID *)arg1 ;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)setSpeechRate:(NSNumber *)arg1 ;
-(void)setModifierKeys:(NSNumber *)arg1 ;
-(void)setBrailleStatusCellGeneral:(NSNumber *)arg1 ;
-(void)setBrailleStatusCellText:(NSNumber *)arg1 ;
-(void)setBrailleTable:(NSString *)arg1 ;
-(void)setSpeakEmojis:(NSNumber *)arg1 ;
-(void)setTableRowAndColumn:(NSNumber *)arg1 ;
-(void)setTableHeaders:(NSNumber *)arg1 ;
-(void)setBrailleOutput:(NSNumber *)arg1 ;
-(void)setBrailleInput:(NSNumber *)arg1 ;
-(void)setBuiltIn:(BOOL)arg1 ;
-(BOOL)identicalProperty:(id)arg1 property2:(id)arg2 ;
-(BOOL)isIdenticalTo:(id)arg1 ;
@end

