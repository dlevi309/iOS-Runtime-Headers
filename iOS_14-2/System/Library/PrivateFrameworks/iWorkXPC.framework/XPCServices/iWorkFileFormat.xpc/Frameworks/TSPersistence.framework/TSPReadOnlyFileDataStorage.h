/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {

	NSURL* _URL;

}
-(id)initWithURL:(id)arg1 ;
-(BOOL)readOnly;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id*)arg3 didCopyDataToBundle:(BOOL*)arg4 ;
@end

