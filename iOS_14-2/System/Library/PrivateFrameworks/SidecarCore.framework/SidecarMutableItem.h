/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isComplete;
-(id)data;
-(BOOL)appendData:(id)arg1 ;
-(id)initWithType:(id)arg1 capacity:(unsigned long long)arg2 ;
@end

