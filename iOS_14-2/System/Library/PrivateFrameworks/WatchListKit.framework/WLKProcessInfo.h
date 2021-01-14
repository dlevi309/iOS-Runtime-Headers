/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@interface WLKProcessInfo : NSObject {

	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(id)valueForEntitlement:(id)arg1 ;
-(void)dealloc;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
@end

