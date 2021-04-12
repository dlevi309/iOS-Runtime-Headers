/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {

	NSNumber* _sizeInBytes;

}

@property (nonatomic,readonly) NSNumber * sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
-(void)addByteSize:(unsigned long long)arg1 ;
-(id)payload;
-(NSNumber *)sizeInBytes;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)dealloc;
@end

