/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/


@protocol _MSMessageComposeExtensionImplProtocol;
@interface _MSExtensionGlobalState : NSObject {

	id<_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;

}

@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> activeExtensionContext;              //@synthesize activeExtensionContext=_activeExtensionContext - In the implementation block
+(id)sharedInstance;
-(void)setActiveExtensionContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(id<_MSMessageComposeExtensionImplProtocol>)activeExtensionContext;
@end

