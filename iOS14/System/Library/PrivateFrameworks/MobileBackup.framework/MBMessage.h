/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@protocol OS_xpc_object;
@class MBConnection, NSObject, NSMutableDictionary, NSString, NSArray, NSError;

@interface MBMessage : NSObject <NSKeyedArchiverDelegate> {

	MBConnection* _connection;
	NSObject*<OS_xpc_object> _xpcObject;
	NSMutableDictionary* _messageInfo;
	NSMutableDictionary* _replyInfo;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcObject;                       //@synthesize xpcObject=_xpcObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageInfo;                        //@synthesize messageInfo=_messageInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * replyInfo;                          //@synthesize replyInfo=_replyInfo - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * arguments; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSObject*<NSSecureCoding>*<NSCopying> reply; 
@property (nonatomic,retain) NSError * replyError; 
@property (nonatomic,retain) MBConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_allowedClasses;
+(id)messageWithName:(id)arg1 arguments:(id)arg2 ;
-(void)setXpcObject:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(id)_initWithXPCObject:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setReplyInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)name;
-(NSArray *)arguments;
-(id)_xpcObject;
-(NSString *)description;
-(NSMutableDictionary *)messageInfo;
-(MBConnection *)connection;
-(NSObject*<NSSecureCoding>*<NSCopying>)reply;
-(void)setMessageInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)replyInfo;
-(void)setConnection:(MBConnection *)arg1 ;
-(void)sendReply;
-(void)setReply:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(NSError *)replyError;
-(void)setReplyError:(NSError *)arg1 ;
-(void)archiver:(id)arg1 didEncodeObject:(id)arg2 ;
@end

