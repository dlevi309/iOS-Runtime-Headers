/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class CVAMattingRequest, NSString;

@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest> {

	CVAMattingRequest* _mattingRequest;

}

@property (retain) CVAMattingRequest * mattingRequest;              //@synthesize mattingRequest=_mattingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVAMattingRequest *)mattingRequest;
-(void)setMattingRequest:(CVAMattingRequest *)arg1 ;
@end

