/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <libobjc.A.dylib/CLSSaveResponse.h>

@protocol CLSSaveResponse <CLSClientRemoteObject>
@required
-(oneway void)clientRemote_saveDone:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CLSSaveResponse : NSObject <CLSSaveResponse> {

	NSMutableDictionary* _objectsByID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(id)completion;
-(oneway void)clientRemote_invalidate;
-(oneway void)clientRemote_deliverObject:(id)arg1 ;
-(oneway void)clientRemote_saveDone:(id)arg1 ;
-(id)savedObjectWithObjectID:(id)arg1 ;
@end

