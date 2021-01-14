/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID, NSData, NSSet;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateLastModified; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (assign,nonatomic) BOOL isMarkedAsDeleted; 
@property (nonatomic,retain) NSData * keyImageData; 
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,retain) NSData * serializedWorkflowData; 
@property (nonatomic,copy) NSString * shortcutDescription; 
@property (nonatomic,copy) NSString * shortcutName; 
@property (nonatomic,retain) NSSet * syncStates; 
+(id)fetchRequest;
@end

