/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
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
-(NSString *)localizedName;
-(NSArray *)actions;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3 ;
@end

