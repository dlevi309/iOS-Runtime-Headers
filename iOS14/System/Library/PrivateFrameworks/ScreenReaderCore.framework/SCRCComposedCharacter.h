/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)length;
-(CFStringRef)originalString;
-(id)initWithCharacter:(int)arg1 ;
-(int)charAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
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

