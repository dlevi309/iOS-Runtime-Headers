/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToFetch;

}

@property (nonatomic,copy) NSSet * objectIDsToFetch;              //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setObjectIDsToFetch:(NSSet *)arg1 ;
-(NSSet *)objectIDsToFetch;
@end

