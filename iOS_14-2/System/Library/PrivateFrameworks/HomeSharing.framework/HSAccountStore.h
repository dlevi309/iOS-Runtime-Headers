/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@protocol OS_dispatch_queue;
@class ICURLRequest, NSObject, NSString;

@interface HSAccountStore : NSObject {

	int _defaultsDidChangeToken;
	ICURLRequest* _groupIDRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,retain) ICURLRequest * groupIDRequest;                   //@synthesize groupIDRequest=_groupIDRequest - In the implementation block
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSString * password; 
+(id)defaultStore;
-(void)clearCaches;
-(id)init;
-(ICURLRequest *)groupIDRequest;
-(void)clearGroupID;
-(NSString *)groupID;
-(BOOL)canDetermineGroupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)password;
-(void)determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setGroupIDRequest:(ICURLRequest *)arg1 ;
-(void)clearAllCredentials;
-(void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

