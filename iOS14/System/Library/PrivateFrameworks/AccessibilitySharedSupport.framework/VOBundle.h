/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, VOSubstitution;

@interface VOBundle : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,retain) VOSubstitution * iOSSubstitution; 
@property (nonatomic,retain) VOSubstitution * macOSSubstitution; 
+(id)fetchRequest;
@end

