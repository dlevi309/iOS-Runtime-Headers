/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

