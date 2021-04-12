/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	_KSTIUserDictionaryEntryValue* _valueToDelete;
	_KSTIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(_KSTIUserDictionaryEntryValue *)arg1 ;
@end

