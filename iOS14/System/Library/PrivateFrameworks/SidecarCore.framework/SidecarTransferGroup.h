/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isComplete;
-(NSArray *)items;
-(id)initWithMessage:(id)arg1 ;
-(long long)type;
-(BOOL)handleMessage:(id)arg1 error:(id*)arg2 ;
@end

