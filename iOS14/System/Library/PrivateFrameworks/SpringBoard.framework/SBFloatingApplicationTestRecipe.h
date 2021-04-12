/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe> {

	unsigned long long _mode;
	BOOL _addSide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)init;
-(void)_perform;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
@end

