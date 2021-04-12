/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfstorage.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString, PurpleTrustAppletEntity, PurpleTrustClientEntity;

@interface PurpleTrustKeyEntity : NSManagedObject

@property (nonatomic,retain) NSObject * blob; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (assign,nonatomic) int version; 
@property (nonatomic,retain) PurpleTrustAppletEntity * applet; 
@property (nonatomic,retain) PurpleTrustClientEntity * client; 
+(id)fetchRequest;
@end

