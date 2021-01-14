/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

