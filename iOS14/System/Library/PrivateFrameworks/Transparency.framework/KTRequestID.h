/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, KTRequest;

@interface KTRequestID : NSManagedObject

@property (nonatomic,copy) NSUUID * requestId; 
@property (nonatomic,retain) KTRequest * request; 
+(id)fetchRequest;
@end

