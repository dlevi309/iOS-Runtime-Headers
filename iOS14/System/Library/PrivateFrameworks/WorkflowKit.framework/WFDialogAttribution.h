/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WFImage;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	WFImage* _icon;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) WFImage * icon;                //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributionWithTitle:(id)arg1 icon:(id)arg2 ;
-(WFImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

