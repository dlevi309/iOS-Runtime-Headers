/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/


#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
@interface MGIOKitHelper : NSObject {

	unsigned devIterator;

}
-(id)init;
-(void)dealloc;
-(void)deleteIterator;
-(unsigned)copyDeviceTreeStructureNext:(id)arg1 withFirstChar:(char)arg2 ;
-(void*)copyDeviceTreeProperty:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFNumberRef)copyNumberFromData:(CFDataRef)arg1 ;
-(void*)copyServiceTreeProperty:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(BOOL)createTreeIterator:(const char*)arg1 ;
-(BOOL)createServicesIteratorByNameMatch:(const char*)arg1 ;
-(CFNumberRef)copyNumberFromDeviceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFStringRef)copyStringFromDeviceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFStringRef)copyStringFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(void*)copyPropertyFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFDataRef)copyDataFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFDataRef)copyDataFromDeviceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFBooleanRef)copyBooleanFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
@end

