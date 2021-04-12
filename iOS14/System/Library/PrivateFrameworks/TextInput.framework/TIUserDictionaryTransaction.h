/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(TIUserDictionaryEntryValue *)valueToDelete;
-(TIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToDelete:(TIUserDictionaryEntryValue *)arg1 ;
-(void)setValueToInsert:(TIUserDictionaryEntryValue *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

