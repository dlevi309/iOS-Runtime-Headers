/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFLoader : NSObject {

	LoaderCBF* loader;

}

@property (nonatomic,readonly) id partLoader; 
-(id)initWithTableData:(id)arg1 ;
-(unsigned long long)countParts;
-(id)partLoader;
-(HVF_Part*)loadPartAtIndex:(unsigned long long)arg1 usingPartCache:(HVF_PartCache*)arg2 ;
@end

