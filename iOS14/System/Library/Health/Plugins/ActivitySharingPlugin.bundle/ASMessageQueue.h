/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {

	NSMutableDictionary* _identifierToMessageDictionary;
	CFStringRef _domainName;
	CFStringRef _queueName;

}
-(void)_synchronizePreferences;
-(id)init;
-(id)initWithQueueName:(id)arg1 ;
-(void)dealloc;
-(id)messageWithIdentifier:(id)arg1 ;
-(void)enumerateQueuedMessagesUsingBlock:(/*^block*/id)arg1 ;
-(void)setMessage:(id)arg1 identifier:(id)arg2 ;
-(void)removeMessageWithIdentifier:(id)arg1 ;
@end

