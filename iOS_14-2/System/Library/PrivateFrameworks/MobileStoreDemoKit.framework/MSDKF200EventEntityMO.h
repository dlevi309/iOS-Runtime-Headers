/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

