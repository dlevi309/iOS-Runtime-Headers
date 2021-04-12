/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCComposedCharacter : NSObject {

	unsigned long long _originalRepresentationLength;
	unsigned long long _normalFormDRepresentationLength;
	unsigned long long _normalFormKCRepresentationLength;
	int* _originalRepresentation;
	int* _normalFormDRepresentation;
	int* _normalFormKCRepresentation;
	long long _originalCombinedCharacterLength;
	CFStringRef _originalCombinedCharacter;

}
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(int)charAtIndex:(unsigned long long)arg1 ;
-(CFStringRef)originalString;
-(id)initWithCharacter:(int)arg1 ;
-(unsigned long long)originalLength;
-(id)_initWithCharacter:(int)arg1 ;
-(id)_initWithSimpleCharacter:(int)arg1 ;
-(id)_initWithComposedCharacter:(CFStringRef)arg1 ;
-(void)_buildFormKC;
-(int)formKCCharAtIndex:(unsigned long long)arg1 ;
-(void)_buildFormD;
-(BOOL)_formKCContaintsUpperCase;
-(unsigned long long)formKCLength;
-(id)initWithComposedCharacter:(CFStringRef)arg1 ;
-(BOOL)isEqualToUChar32:(int)arg1 ;
-(CFStringRef)copyUnicodeDescriptionString;
-(int)formDCharAtIndex:(unsigned long long)arg1 ;
-(int)originalFromCharAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsUpperCase;
-(unsigned long long)formDLength;
@end

