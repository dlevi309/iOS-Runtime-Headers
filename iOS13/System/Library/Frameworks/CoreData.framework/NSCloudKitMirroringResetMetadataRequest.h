/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToReset;

}

@property (nonatomic,copy) NSSet * objectIDsToReset;              //@synthesize objectIDsToReset=_objectIDsToReset - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)objectIDsToReset;
-(void)setObjectIDsToReset:(NSSet *)arg1 ;
@end

