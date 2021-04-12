/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, VOSubstitution;

@interface VOLanguage : NSManagedObject

@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * languageID; 
@property (nonatomic,retain) VOSubstitution * substitution; 
+(id)fetchRequest;
@end

