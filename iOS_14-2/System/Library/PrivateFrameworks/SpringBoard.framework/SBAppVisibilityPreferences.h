/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBAppVisibilityPreferences : NSObject {

	NSString* _bundleID;
	NSString* _containerPath;
	BOOL _defaultVisible;
	BOOL _currentlyVisible;

}

@property (getter=isDefaultVisible,readonly) BOOL defaultVisible;                  //@synthesize defaultVisible=_defaultVisible - In the implementation block
@property (getter=isCurrentlyVisible,readonly) BOOL currentlyVisible; 
-(BOOL)isDefaultVisible;
-(BOOL)isCurrentlyVisible;
-(BOOL)update;
-(id)description;
-(id)initWithDefaultVisible:(BOOL)arg1 bundleID:(id)arg2 containerPath:(id)arg3 ;
@end

