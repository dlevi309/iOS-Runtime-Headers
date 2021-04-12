/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding> {

	NSString* _actionClassName;
	NSDictionary* _classNamesByType;

}

@property (nonatomic,copy,readonly) NSString * actionClassName;                   //@synthesize actionClassName=_actionClassName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * classNamesByType;              //@synthesize classNamesByType=_classNamesByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithActionClassName:(id)arg1 classNamesByType:(id)arg2 attribution:(id)arg3 ;
-(NSString *)actionClassName;
-(NSDictionary *)classNamesByType;
@end

