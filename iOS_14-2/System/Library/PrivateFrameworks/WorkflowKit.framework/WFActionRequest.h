/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(WFAction *)arg1 ;
-(id)description;
-(WFAction *)result;
-(NSString *)actionIdentifier;
-(NSDictionary *)serializedParameters;
-(id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
@end

