/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@class NSArray;

@interface SidecarTransferGroup : NSObject {

	long long _completedItems;
	NSArray* _mutableItems;
	long long _type;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) long long type; 
-(long long)type;
-(NSArray *)items;
-(BOOL)isComplete;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)handleMessage:(id)arg1 error:(id*)arg2 ;
@end

