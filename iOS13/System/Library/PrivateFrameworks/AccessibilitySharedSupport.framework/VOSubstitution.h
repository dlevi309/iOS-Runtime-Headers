/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSSet;

@interface VOSubstitution : NSManagedObject

@property (assign,nonatomic) BOOL appliesToAllApps; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (assign,nonatomic) BOOL ignoreCase; 
@property (assign,nonatomic) BOOL isActive; 
@property (assign,nonatomic) BOOL isUserSubstitution; 
@property (nonatomic,copy) NSString * originalString; 
@property (nonatomic,copy) NSString * phonemes; 
@property (assign,nonatomic) long long replacementLength; 
@property (assign,nonatomic) long long replacementLocation; 
@property (nonatomic,copy) NSString * replacementString; 
@property (assign,nonatomic) short version; 
@property (nonatomic,retain) NSSet * iOSBundles; 
@property (nonatomic,retain) NSSet * languages; 
@property (nonatomic,retain) NSSet * macOSBundles; 
@property (nonatomic,retain) NSSet * voices; 
+(id)fetchRequest;
@end

