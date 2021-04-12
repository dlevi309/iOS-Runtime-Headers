/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBAppVisibilityPreferences : NSObject {

	NSString* _bundleID;
	NSString* _containerPath;
	BOOL _defaultVisible;
	BOOL _currentlyVisible;

}

@property (readonly) BOOL defaultVisible;              //@synthesize defaultVisible=_defaultVisible - In the implementation block
@property (assign) BOOL currentlyVisible;              //@synthesize currentlyVisible=_currentlyVisible - In the implementation block
-(id)description;
-(BOOL)update;
-(void)setCurrentlyVisible:(BOOL)arg1 ;
-(id)initWithDefaultVisible:(BOOL)arg1 bundleID:(id)arg2 containerPath:(id)arg3 ;
-(BOOL)defaultVisible;
-(BOOL)currentlyVisible;
@end

