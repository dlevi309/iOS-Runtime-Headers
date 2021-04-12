/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UIImage *)icon;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 icon:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

