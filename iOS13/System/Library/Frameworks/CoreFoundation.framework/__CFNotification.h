/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)userInfo;
-(id)initWithName:(CFStringRef)arg1 object:(const void*)arg2 userInfo:(CFDictionaryRef)arg3 foundation:(BOOL)arg4 ;
@end

