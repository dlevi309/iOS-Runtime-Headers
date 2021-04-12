/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)result;
-(void)setResult:(NSDictionary *)arg1 ;
-(NSXPCStore *)store;
-(NSCoreDataXPCMessage *)message;
-(id)initForMessage:(id)arg1 store:(id)arg2 ;
@end

