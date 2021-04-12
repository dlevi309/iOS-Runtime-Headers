/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@interface WLKProcessInfo : NSObject {

	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)dealloc;
-(id)valueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
@end

