/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
@class NSURL, NSData, NSString, NSArray;


@protocol CoreDAVLeafDataPayload <NSObject>
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
@optional
-(void)setDestinationURL:(id)arg1;
-(NSURL *)destinationURL;
-(NSURL *)sourceURL;
-(void)setSourceURL:(id)arg1;
-(NSArray *)childrenOrder;

@required
-(NSData *)dataPayload;
-(NSURL *)serverID;
-(void)setServerID:(id)arg1;
-(NSString *)syncKey;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@end


@class NSURL, NSData, NSString, NSArray;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {

	NSURL* _serverID;
	NSString* _syncKey;
	NSData* _dataPayload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID;                       //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) NSData * dataPayload;                 //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,readonly) NSString * syncKey;                   //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
-(NSData *)dataPayload;
-(NSURL *)serverID;
-(void)setServerID:(NSURL *)arg1 ;
-(NSString *)syncKey;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
@end

