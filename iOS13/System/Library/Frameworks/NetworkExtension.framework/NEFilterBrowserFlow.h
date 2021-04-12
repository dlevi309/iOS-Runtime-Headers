/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest, NSURLResponse, NSURL;

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	NSURLRequest* _request;
	NSURLResponse* _response;
	NSURL* _parentURL;

}

@property (retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (retain) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (retain) NSURL * parentURL;                     //@synthesize parentURL=_parentURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(BOOL)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3 ;
-(NSURL *)parentURL;
-(id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3 ;
-(id)sanitizeRemediationButtonText:(id)arg1 ;
-(BOOL)createDropReply:(id)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(void)writeCurrentVerdictInReply:(id)arg1 direction:(long long)arg2 ;
-(void)setParentURL:(NSURL *)arg1 ;
@end

