/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class INIntent;

@interface WFWidgetConfigurationResponse : NSObject <NSSecureCoding> {

	INIntent* _intent;

}

@property (nonatomic,readonly) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
+(BOOL)supportsSecureCoding;
-(INIntent *)intent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIntent:(id)arg1 ;
@end

