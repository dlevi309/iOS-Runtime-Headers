/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

