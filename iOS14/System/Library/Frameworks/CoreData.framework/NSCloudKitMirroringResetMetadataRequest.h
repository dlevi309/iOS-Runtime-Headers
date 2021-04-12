/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToReset;

}

@property (nonatomic,copy) NSSet * objectIDsToReset;              //@synthesize objectIDsToReset=_objectIDsToReset - In the implementation block
-(NSSet *)objectIDsToReset;
-(void)setObjectIDsToReset:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

