/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {

	long long _internalEntityId;

}
+(BOOL)supportsSecureCoding;
+(id)recordIdWithInternalEntityId:(long long)arg1 ;
+(id)recordIdWithNumericValue:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numericValue;
-(id)initWithInternalEntityId:(long long)arg1 ;
-(long long)internalEntityId;
-(BOOL)isEqualToRecordId:(id)arg1 ;
@end

