/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
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

