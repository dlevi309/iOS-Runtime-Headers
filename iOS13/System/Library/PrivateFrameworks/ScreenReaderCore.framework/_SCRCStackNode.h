/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@interface _SCRCStackNode : NSObject {

	id _object;
	_SCRCStackNode* _prev;
	_SCRCStackNode* _next;

}

@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * next;              //@synthesize next=_next - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(_SCRCStackNode *)next;
-(_SCRCStackNode *)prev;
-(void)setNext:(_SCRCStackNode *)arg1 ;
-(void)setPrev:(_SCRCStackNode *)arg1 ;
@end

