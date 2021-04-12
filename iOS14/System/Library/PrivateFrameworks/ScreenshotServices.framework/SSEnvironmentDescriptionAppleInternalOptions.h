/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class SSUIRunPPTServiceRequest, RCPMovie, NSString;

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding> {

	SSUIRunPPTServiceRequest* _runPPTServiceRequest;
	RCPMovie* _recapMovie;

}

@property (nonatomic,retain) SSUIRunPPTServiceRequest * runPPTServiceRequest;              //@synthesize runPPTServiceRequest=_runPPTServiceRequest - In the implementation block
@property (nonatomic,retain) RCPMovie * recapMovie;                                        //@synthesize recapMovie=_recapMovie - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(SSUIRunPPTServiceRequest *)runPPTServiceRequest;
-(RCPMovie *)recapMovie;
-(void)setRunPPTServiceRequest:(SSUIRunPPTServiceRequest *)arg1 ;
-(void)setRecapMovie:(RCPMovie *)arg1 ;
@end

