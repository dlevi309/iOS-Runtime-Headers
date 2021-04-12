/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject {

	NSString* _actionIdentifier;
	NSDictionary* _serializedParameters;
	WFAction* _result;

}

@property (nonatomic,retain) WFAction * result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                      //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
-(id)description;
-(WFAction *)result;
-(void)setResult:(WFAction *)arg1 ;
-(NSString *)actionIdentifier;
-(NSDictionary *)serializedParameters;
-(id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
@end

