/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfstorage.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSObject;

@interface ExpressESEEntity : NSManagedObject

@property (nonatomic,copy) NSString * aid; 
@property (nonatomic,retain) NSObject * expressInfo; 
@property (assign,nonatomic) int version; 
+(id)fetchRequest;
@end

