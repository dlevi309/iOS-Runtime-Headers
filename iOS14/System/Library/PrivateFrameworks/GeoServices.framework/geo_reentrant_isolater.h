/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface geo_reentrant_isolater : NSObject {

	char* _name;
	os_unfair_recursive_lock_s _lock;

}
-(id)debugDescription;
-(id)initWithName:(const char*)arg1 ;
-(id)description;
-(void)dealloc;
@end

