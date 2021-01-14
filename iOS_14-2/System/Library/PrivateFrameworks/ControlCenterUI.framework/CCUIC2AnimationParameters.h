/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIAnimationParameters.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CCUIC2AnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {

	BOOL _interactive;
	double _tension;
	double _friction;

}

@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,readonly) double tension;                                     //@synthesize tension=_tension - In the implementation block
@property (nonatomic,readonly) double friction;                                    //@synthesize friction=_friction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)friction;
-(double)tension;
-(id)_initWithAnimationParameters:(id)arg1 ;
-(id)init;
-(BOOL)isInteractive;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

