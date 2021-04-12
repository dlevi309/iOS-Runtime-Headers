/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,retain) NSData * serializedSuggestions; 
+(id)fetchRequest;
@end

