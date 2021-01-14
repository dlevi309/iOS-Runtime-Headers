/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSDate, NSSet;

@interface AXSS_PunctuationGroup : NSManagedObject

@property (nonatomic,copy) NSUUID * basePunctuationUUID; 
@property (nonatomic,copy) NSString * ckChangeTag; 
@property (nonatomic,copy) NSDate * ckRecordProcessDate; 
@property (assign,nonatomic) BOOL inCloud; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (assign,nonatomic) short version; 
@property (nonatomic,retain) NSSet * autoSwitchContexts; 
+(id)fetchRequest;
@end

