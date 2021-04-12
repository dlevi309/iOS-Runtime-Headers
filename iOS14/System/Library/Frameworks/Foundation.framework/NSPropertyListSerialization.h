/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface NSPropertyListSerialization : NSObject {

	void** reserved[6];

}
+(id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4 ;
+(id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id*)arg4 ;
+(id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned long long)arg2 format:(unsigned long long*)arg3 errorDescription:(out id*)arg4 ;
+(long long)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(out id*)arg5 ;
+(id)propertyListWithStream:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4 ;
+(id)dataFromPropertyList:(id)arg1 format:(unsigned long long)arg2 errorDescription:(out id*)arg3 ;
+(BOOL)propertyList:(id)arg1 isValidForFormat:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
@end

