/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSOperation.h>

@class NSError, NSString, MSVArtworkServiceRequest;

@interface MSVArtworkServiceOperation : NSOperation {

	NSError* _operationError;
	NSString* _debugMessage;
	MSVArtworkServiceRequest* _request;

}

@property (nonatomic,readonly) MSVArtworkServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
@property (nonatomic,copy,readonly) NSString * debugMessage; 
-(MSVArtworkServiceRequest *)request;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(void)setDebugMessage:(NSString *)arg1 ;
-(id)initWithArtworkRequest:(id)arg1 ;
-(NSString *)debugMessage;
@end

