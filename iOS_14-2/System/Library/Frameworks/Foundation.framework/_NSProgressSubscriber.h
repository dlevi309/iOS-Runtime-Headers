/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSProgressSubscriber.h>

@class NSString, NSMutableDictionary, NSLock;

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

	/*^block*/id _publishingHandler;
	NSString* _subscriberID;
	NSMutableDictionary* _proxiesByPublisherID;
	BOOL _started;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4 ;
-(void)stop;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 ;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3 ;
-(void)startForFileURL:(id)arg1 ;
-(id)initWithPublishingHandler:(/*^block*/id)arg1 ;
-(void)startForCategory:(id)arg1 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(void)dealloc;
@end

