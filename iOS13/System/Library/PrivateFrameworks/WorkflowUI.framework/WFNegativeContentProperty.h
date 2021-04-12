/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying> {

	WFContentProperty* _property;

}

@property (nonatomic,copy,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(WFContentProperty *)property;
@end

