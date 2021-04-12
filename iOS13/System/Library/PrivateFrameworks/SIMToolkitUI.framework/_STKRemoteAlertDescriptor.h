/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@class NSString, STKSessionAction, BSAction;

@interface _STKRemoteAlertDescriptor : NSObject {

	NSString* _serviceIdentifier;
	NSString* _viewControllerName;
	STKSessionAction* _action;
	BSAction* _BSAction;

}

@property (nonatomic,copy,readonly) NSString * serviceIdentifier;               //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerName;              //@synthesize viewControllerName=_viewControllerName - In the implementation block
@property (nonatomic,readonly) STKSessionAction * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BSAction * BSAction;                             //@synthesize BSAction=_BSAction - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)description;
-(id)debugDescription;
-(BOOL)isValid;
-(STKSessionAction *)action;
-(NSString *)serviceIdentifier;
-(id)initWithAction:(id)arg1 viewControllerName:(id)arg2 ;
-(NSString *)viewControllerName;
-(BSAction *)BSAction;
@end

