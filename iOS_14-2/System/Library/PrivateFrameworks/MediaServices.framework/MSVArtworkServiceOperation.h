/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(MSVArtworkServiceRequest *)request;
-(void)setDebugMessage:(NSString *)arg1 ;
-(id)initWithArtworkRequest:(id)arg1 ;
-(NSString *)debugMessage;
@end

