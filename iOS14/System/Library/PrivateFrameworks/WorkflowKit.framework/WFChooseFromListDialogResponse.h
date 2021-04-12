/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WFChooseFromListDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSArray* _selectedItems;

}

@property (nonatomic,readonly) NSArray * selectedItems;              //@synthesize selectedItems=_selectedItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)selectedItems;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItems:(id)arg1 cancelled:(BOOL)arg2 ;
@end

