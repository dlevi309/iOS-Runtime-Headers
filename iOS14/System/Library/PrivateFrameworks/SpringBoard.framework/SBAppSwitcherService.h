/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

