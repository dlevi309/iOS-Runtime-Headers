/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
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

