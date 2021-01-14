/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSSilentEnrollmentContext, NSString;

@interface SSSilentEnrollment : SSRequest <SSXPCCoding> {

	SSSilentEnrollmentContext* _context;

}

@property (retain) SSSilentEnrollmentContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSSilentEnrollmentContext *)context;
-(id)initWithSilentEnrollmentContext:(id)arg1 ;
-(void)setContext:(SSSilentEnrollmentContext *)arg1 ;
@end

