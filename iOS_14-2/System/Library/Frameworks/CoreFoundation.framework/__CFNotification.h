/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSNotification.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __CFNotification : NSNotification <NSCopying> {

	id _name;
	id _object;
	id _userInfo;
	BOOL _fouSemantics;
	BOOL _dyingObject;

}
-(id)initWithName:(CFStringRef)arg1 object:(const void*)arg2 userInfo:(CFDictionaryRef)arg3 foundation:(BOOL)arg4 ;
-(id)userInfo;
-(id)object;
-(id)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

