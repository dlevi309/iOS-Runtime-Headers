/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject <NSCopying> {

	FBSystemShellInitializationOptions* _options;
	BOOL _bootedDark;

}

@property (nonatomic,readonly) FBSystemShellInitializationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long lastExitReason; 
@property (getter=wasBootedDark,nonatomic,readonly) BOOL bootedDark; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBSystemShellInitializationOptions *)options;
-(id)_initWithOptions:(id)arg1 ;
-(BOOL)wasBootedDark;
-(unsigned long long)lastExitReason;
-(BOOL)_optsIntoUIKitWindowHosting;
-(BOOL)_disablesUIKitWindowImplicitScenes;
@end

