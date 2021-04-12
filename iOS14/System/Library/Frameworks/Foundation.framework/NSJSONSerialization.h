/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface NSJSONSerialization : NSObject {

	void** reserved[6];

}
+(id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)isValidJSONObject:(id)arg1 ;
-(id)init;
@end

