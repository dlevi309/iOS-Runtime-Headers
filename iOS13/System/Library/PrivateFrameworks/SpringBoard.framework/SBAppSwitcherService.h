/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBAppSwitcherService : NSObject {

	NSString* _bundleIdentifier;
	NSString* _viewServiceClassName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewServiceClassName;              //@synthesize viewServiceClassName=_viewServiceClassName - In the implementation block
+(id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setViewServiceClassName:(NSString *)arg1 ;
-(NSString *)viewServiceClassName;
@end

