/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)clearCaches;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearGroupID;
-(void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canDetermineGroupID;
-(void)clearAllCredentials;
-(ICURLRequest *)groupIDRequest;
-(void)setGroupIDRequest:(ICURLRequest *)arg1 ;
@end

