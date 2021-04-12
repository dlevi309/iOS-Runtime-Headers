/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {

	NSRange _rangeOverride;
	unsigned long long _resultTypeOverride;
	CKTextKitEntityAttribute* _entityAttribute;

}

@property (nonatomic,readonly) CKTextKitEntityAttribute * entityAttribute;              //@synthesize entityAttribute=_entityAttribute - In the implementation block
-(NSRange)range;
-(unsigned long long)resultType;
-(id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(NSRange)arg3 ;
-(CKTextKitEntityAttribute *)entityAttribute;
@end

