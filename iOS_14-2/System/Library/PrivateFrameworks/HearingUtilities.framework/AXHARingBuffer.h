/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class NSMutableArray;

@interface AXHARingBuffer : NSObject {

	NSMutableArray* _bufferArray;
	long long _size;
	long long _head;

}

@property (readonly) unsigned long long count; 
-(id)content;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)reset;
@end

