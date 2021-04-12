/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL hasSynced; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,copy) NSString * syncServiceIdentifier; 
@property (nonatomic,retain) VCVoiceShortcutManagedObject * voiceShortcut; 
+(id)fetchRequest;
@end

