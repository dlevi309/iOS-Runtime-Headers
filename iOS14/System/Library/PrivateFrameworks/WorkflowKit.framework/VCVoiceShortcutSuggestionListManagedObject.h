/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,retain) NSData * serializedSuggestions; 
@property (assign,nonatomic) int shortcutAvailabilityOptions; 
+(id)fetchRequest;
-(id)descriptor;
@end

