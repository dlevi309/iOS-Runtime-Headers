/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithOptions:(id)arg1 ;
-(BOOL)wasBootedDark;
-(FBSystemShellInitializationOptions *)options;
-(unsigned long long)lastExitReason;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

