/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, UIImage;

@interface WFActionDrawerAppItem : NSObject {

	NSString* _name;
	UIImage* _icon;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UIImage *)icon;
-(id)initWithName:(id)arg1 icon:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

