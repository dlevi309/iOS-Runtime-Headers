/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(id)initWithObject:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(id)nonretainedObjectValue;
-(unsigned long long)hash;
-(BOOL)isEqualToValue:(id)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(id)weakObjectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(void)dealloc;
@end

