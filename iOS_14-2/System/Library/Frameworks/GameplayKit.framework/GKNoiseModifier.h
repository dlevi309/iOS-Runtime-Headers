/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <libobjc.A.dylib/GKNoiseModule.h>

@class NSMutableArray, NSString;

@interface GKNoiseModifier : NSObject <GKNoiseModule> {

	NSMutableArray* _inputModules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)inputModuleAtIndex:(int)arg1 ;
-(void)setInputModule:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

