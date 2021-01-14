/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToDelete;
-(_KSTIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToDelete:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(void)setValueToInsert:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

