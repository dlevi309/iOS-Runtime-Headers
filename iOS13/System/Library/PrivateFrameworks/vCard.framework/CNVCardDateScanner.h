/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSString;

@interface CNVCardDateScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}

@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)position;
-(unsigned short)nextCharacter;
-(unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1 ;
-(long long)scanComponentValueOfLength:(unsigned long long)arg1 ;
-(long long)scanCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)scanLeapMarker;
@end

