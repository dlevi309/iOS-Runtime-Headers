/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue {

	unsigned long long _specialFlags;
	void* typeInfo;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)getValue:(void*)arg1 ;
-(unsigned long long)hash;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(const void*)_value;
-(BOOL)isEqualToValue:(id)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
@end

