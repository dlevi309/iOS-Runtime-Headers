/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCStore, NSCoreDataXPCMessage, NSDictionary, NSError;

@interface NSXPCStoreMessageContext : NSObject {

	NSXPCStore* _store;
	NSCoreDataXPCMessage* _message;
	NSDictionary* _result;
	NSError* _error;

}

@property (nonatomic,readonly) NSCoreDataXPCMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSXPCStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSDictionary * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
-(void)setResult:(NSDictionary *)arg1 ;
-(NSCoreDataXPCMessage *)message;
-(NSXPCStore *)store;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initForMessage:(id)arg1 store:(id)arg2 ;
-(NSDictionary *)result;
-(void)dealloc;
@end

