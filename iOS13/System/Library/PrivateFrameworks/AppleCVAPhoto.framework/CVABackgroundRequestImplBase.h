/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

