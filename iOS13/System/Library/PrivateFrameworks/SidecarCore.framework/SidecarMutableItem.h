/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarItem.h>

@class NSMutableData;

@interface SidecarMutableItem : SidecarItem {

	NSMutableData* _mutableData;
	unsigned long long _capacity;
	unsigned _complete : 1;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(id)data;
-(BOOL)appendData:(id)arg1 ;
-(BOOL)isComplete;
-(id)initWithType:(id)arg1 capacity:(unsigned long long)arg2 ;
@end

