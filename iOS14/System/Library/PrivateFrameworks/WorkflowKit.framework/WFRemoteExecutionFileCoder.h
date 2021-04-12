/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <ContentKit/WFFileCoder.h>

@class NSMutableArray, NSString, NSURL, WFRemoteExecutionCoordinator;

@interface WFRemoteExecutionFileCoder : WFFileCoder {

	NSMutableArray* _transferIdentifiers;
	NSString* _requestIdentifier;
	NSURL* _fileURL;
	/*^block*/id _fileAvailabilityHandler;
	WFRemoteExecutionCoordinator* _coordinator;

}

@property (nonatomic,retain) NSMutableArray * transferIdentifiers;                           //@synthesize transferIdentifiers=_transferIdentifiers - In the implementation block
@property (nonatomic,copy) id fileAvailabilityHandler;                                       //@synthesize fileAvailabilityHandler=_fileAvailabilityHandler - In the implementation block
@property (assign,nonatomic,__weak) WFRemoteExecutionCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)requestIdentifier;
-(long long)targetPlatform;
-(void)setCoordinator:(WFRemoteExecutionCoordinator *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithCoder:(id)arg1 ;
-(WFRemoteExecutionCoordinator *)coordinator;
-(id)initWithCoordinator:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)archiveFileAtURL:(id)arg1 fileIsTemporary:(BOOL)arg2 withCoder:(id)arg3 ;
-(void)cancelOutstandingTransfers;
-(id)decodeFileWithCoder:(id)arg1 fileIsTemporary:(BOOL*)arg2 ;
-(void)fileAvailabilityChanged;
-(void)waitForFileAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)transferIdentifiers;
-(void)setTransferIdentifiers:(NSMutableArray *)arg1 ;
-(id)fileAvailabilityHandler;
-(void)setFileAvailabilityHandler:(id)arg1 ;
@end

