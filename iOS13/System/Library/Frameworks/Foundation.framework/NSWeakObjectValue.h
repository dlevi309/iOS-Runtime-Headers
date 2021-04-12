/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(const char*)objCType;
-(void)dealloc;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
@end

