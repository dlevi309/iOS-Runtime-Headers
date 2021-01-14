/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, AXSS_PunctuationGroup;

@interface AXSS_PunctuationContext : NSManagedObject

@property (nonatomic,copy) NSString * contextIdentifier; 
@property (nonatomic,retain) AXSS_PunctuationGroup * group; 
+(id)fetchRequest;
@end

