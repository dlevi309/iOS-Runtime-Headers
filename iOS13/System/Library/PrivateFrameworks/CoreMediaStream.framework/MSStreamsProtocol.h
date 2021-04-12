/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSStreamsProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL;

@interface MSStreamsProtocol : NSObject {

	id<MSStreamsProtocolDelegate> _delegate;
	NSString* _personID;

}

@property (assign,nonatomic) id<MSStreamsProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                               //@synthesize personID=_personID - In the implementation block
@property (nonatomic,__weak,readonly) NSURL * putURL; 
@property (nonatomic,__weak,readonly) NSURL * getURL; 
@property (nonatomic,__weak,readonly) NSURL * resetURL; 
@property (nonatomic,__weak,readonly) NSURL * reauthorizeURL; 
@property (nonatomic,__weak,readonly) NSURL * uploadCompleteURL; 
@property (nonatomic,__weak,readonly) NSURL * deleteURL; 
-(id<MSStreamsProtocolDelegate>)delegate;
-(void)setDelegate:(id<MSStreamsProtocolDelegate>)arg1 ;
-(void)abort;
-(NSString *)personID;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(NSURL *)getURL;
-(NSURL *)putURL;
-(NSURL *)resetURL;
-(NSURL *)reauthorizeURL;
-(NSURL *)uploadCompleteURL;
-(NSURL *)deleteURL;
-(id)deviceInfoDict;
-(void)_didFindServerSideConfigurationVersion:(id)arg1 ;
-(void)_didReceiveRetryAfterDate:(id)arg1 ;
-(void)_refreshAuthTokenForContext:(_MSSPCContext*)arg1 ;
@end

