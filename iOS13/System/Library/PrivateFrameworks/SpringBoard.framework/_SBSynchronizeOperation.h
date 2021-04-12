/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, NSMutableArray;

@interface _SBSynchronizeOperation : NSOperation {

	NSString* _humanReadableDescription;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSMutableArray* _tasks;

}

@property (nonatomic,retain) NSString * humanReadableDescription;              //@synthesize humanReadableDescription=_humanReadableDescription - In the implementation block
-(id)init;
-(void)main;
-(void)addTask:(/*^block*/id)arg1 ;
-(NSString *)humanReadableDescription;
-(void)setHumanReadableDescription:(NSString *)arg1 ;
@end

