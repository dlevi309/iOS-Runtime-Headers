/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID;

@interface AXSS_PunctuationEntry : NSManagedObject

@property (nonatomic,copy) NSString * ckChangeTag; 
@property (nonatomic,copy) NSDate * ckRecordProcessDate; 
@property (nonatomic,copy) NSUUID * groupUUID; 
@property (assign,nonatomic) BOOL inCloud; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSString * punctuation; 
@property (nonatomic,copy) NSString * replacement; 
@property (nonatomic,copy) NSString * rule; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (assign,nonatomic) short version; 
+(id)fetchRequest;
@end

