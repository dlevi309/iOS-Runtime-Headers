/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMobileGestalt.dylib
*/


#import <libMobileGestalt.dylib/libMobileGestalt.dylib-Structs.h>
@interface MGIOKitHelper : NSObject {

	unsigned devIterator;

}
-(id)init;
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
-(void)dealloc;
@end

