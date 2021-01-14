/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

