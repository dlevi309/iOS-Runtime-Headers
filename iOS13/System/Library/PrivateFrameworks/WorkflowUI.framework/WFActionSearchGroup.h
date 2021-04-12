/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, NSArray;

@interface WFActionSearchGroup : NSObject {

	NSString* _identifier;
	NSString* _localizedName;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                     //@synthesize actions=_actions - In the implementation block
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSArray *)actions;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3 ;
@end

