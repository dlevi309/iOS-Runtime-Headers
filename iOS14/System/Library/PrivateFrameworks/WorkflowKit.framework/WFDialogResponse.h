/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFDialogResponse : NSObject <NSSecureCoding> {

	long long _responseCode;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) long long responseCode;                         //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCancelled;
-(long long)responseCode;
-(id)initWithResponseCode:(long long)arg1 ;
-(id)initWithCancelled:(BOOL)arg1 ;
-(BOOL)shouldDismissDialogInTransientMode;
@end

