/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFDialogAttribution, NSString;

@interface WFDialogRequest : NSObject <NSSecureCoding> {

	WFDialogAttribution* _attribution;
	NSString* _prompt;

}

@property (nonatomic,readonly) WFDialogAttribution * attribution;              //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy,readonly) NSString * prompt;                         //@synthesize prompt=_prompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)prompt;
-(void)encodeWithCoder:(id)arg1 ;
-(WFDialogAttribution *)attribution;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAppBundleIdentifier:(id)arg1 prompt:(id)arg2 ;
-(id)initWithAttribution:(id)arg1 prompt:(id)arg2 ;
@end

