/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	TIUserDictionaryEntryValue* _valueToDelete;
	TIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(TIUserDictionaryEntryValue *)arg1 ;
-(TIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(TIUserDictionaryEntryValue *)arg1 ;
@end

