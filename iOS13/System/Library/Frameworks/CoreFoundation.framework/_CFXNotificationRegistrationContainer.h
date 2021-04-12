/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF6* _children;

}
+(Class)childClass;
-(void)dealloc;
-(void)invalidate;
-(void)addChild:(id)arg1 ;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF2*)arg2 ;
-(id)initWithParent:(id)arg1 ;
-(void)resetChildren;
-(void)removeChild:(id)arg1 token:(unsigned long long)arg2 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
@end

