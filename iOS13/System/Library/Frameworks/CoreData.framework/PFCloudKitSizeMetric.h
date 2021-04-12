/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {

	NSNumber* _sizeInBytes;

}

@property (nonatomic,readonly) NSNumber * sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
-(void)dealloc;
-(NSNumber *)sizeInBytes;
-(id)payload;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)addByteSize:(unsigned long long)arg1 ;
@end

