/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSURL, NSString;

@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession {

	NSURL* _fileURL;
	NSString* _transferIdentifier;
	NSString* _requestIdentifier;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * transferIdentifier;              //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(long long)version;
+(BOOL)supportsVersion:(long long)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)requestIdentifier;
-(NSURL *)fileURL;
-(NSString *)transferIdentifier;
-(void)finishWithError:(id)arg1 ;
-(id)initWithService:(id)arg1 fileURL:(id)arg2 transferIdentifier:(id)arg3 requestIdentifier:(id)arg4 ;
-(BOOL)sendToDestinations:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)fileSentWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
@end

