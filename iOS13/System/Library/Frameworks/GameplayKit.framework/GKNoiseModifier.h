/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

