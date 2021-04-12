/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {

	long long _internalEntityId;

}
+(id)recordIdForContactWithRowId:(long long)arg1 ;
+(id)recordIdForContactDetailWithRowId:(long long)arg1 ;
+(id)recordIdForEventWithRowId:(long long)arg1 ;
+(id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2 ;
+(id)recordIdForEmailWithRowId:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)recordIdWithInternalEntityId:(long long)arg1 ;
+(id)recordIdWithNumericValue:(long long)arg1 ;
-(long long)rowId;
-(unsigned char)tableId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInternalEntityId:(long long)arg1 ;
-(long long)internalEntityId;
-(BOOL)isEqualToRecordId:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)numericValue;
@end

