/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {

	NSMutableDictionary* _identifierToMessageDictionary;
	CFStringRef _domainName;
	CFStringRef _queueName;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueueName:(id)arg1 ;
-(void)_synchronizePreferences;
-(id)messageWithIdentifier:(id)arg1 ;
-(void)enumerateQueuedMessagesUsingBlock:(/*^block*/id)arg1 ;
-(void)setMessage:(id)arg1 identifier:(id)arg2 ;
-(void)removeMessageWithIdentifier:(id)arg1 ;
@end

