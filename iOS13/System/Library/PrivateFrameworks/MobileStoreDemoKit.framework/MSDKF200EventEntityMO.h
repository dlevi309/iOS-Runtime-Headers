/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDictionary;

@interface MSDKF200EventEntityMO : NSManagedObject

@property (assign,nonatomic) BOOL committed; 
@property (nonatomic,copy) NSString * dedupKey; 
@property (nonatomic,copy) NSString * kind; 
@property (nonatomic,retain) NSDictionary * optionalKeys; 
@property (nonatomic,copy) NSString * senderUid; 
@property (nonatomic,copy) NSString * sourceUid; 
@property (assign,nonatomic) long long timestamp; 
+(id)fetchRequest;
@end

