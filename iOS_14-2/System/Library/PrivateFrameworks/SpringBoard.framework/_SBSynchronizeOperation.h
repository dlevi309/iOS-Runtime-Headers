/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addTask:(/*^block*/id)arg1 ;
-(id)init;
-(void)main;
-(NSString *)humanReadableDescription;
-(void)setHumanReadableDescription:(NSString *)arg1 ;
@end

