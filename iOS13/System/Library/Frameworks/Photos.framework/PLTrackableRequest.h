/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSXPCConnection, NSString;


@protocol PLTrackableRequest
@property (readonly) NSXPCConnection * clientConnection; 
@property (readonly) NSString * taskIdentifier; 
@property (__weak) id<PLTrackableRequestDelegate> delegate; 
@property (assign,nonatomic) unsigned long long signpostID; 
@required
-(id<PLTrackableRequestDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(NSString *)taskIdentifier;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1;
-(void)runDaemonSide;
-(NSXPCConnection *)clientConnection;

@end

