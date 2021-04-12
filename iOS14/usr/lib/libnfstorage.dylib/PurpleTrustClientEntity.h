/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfstorage.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PurpleTrustClientEntity : NSManagedObject

@property (nonatomic,copy) NSString * clientName; 
@property (nonatomic,retain) NSSet * purpleTrust; 
+(id)fetchRequest;
@end

