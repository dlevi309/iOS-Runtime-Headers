/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFUUIDProvider.h>

@class WFAction, NSString;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider> {

	WFAction* _action;
	unsigned long long _position;

}

@property (nonatomic,readonly) WFAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)position;
-(WFAction *)action;
-(id)generateOutputUUIDForAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2 ;
@end

