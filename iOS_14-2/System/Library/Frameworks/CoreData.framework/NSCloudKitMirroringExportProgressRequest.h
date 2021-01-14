/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToFetch;

}

@property (nonatomic,copy) NSSet * objectIDsToFetch;              //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
-(void)setObjectIDsToFetch:(NSSet *)arg1 ;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSSet *)objectIDsToFetch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

