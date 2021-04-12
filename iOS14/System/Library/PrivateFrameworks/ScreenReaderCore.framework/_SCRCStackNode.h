/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@interface _SCRCStackNode : NSObject {

	id _object;
	_SCRCStackNode* _prev;
	_SCRCStackNode* _next;

}

@property (nonatomic,retain) id object;                                 //@synthesize object=_object - In the implementation block
@property (assign,nonatomic,__weak) _SCRCStackNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * next;                     //@synthesize next=_next - In the implementation block
-(_SCRCStackNode *)next;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setPrev:(_SCRCStackNode *)arg1 ;
-(void)setNext:(_SCRCStackNode *)arg1 ;
-(_SCRCStackNode *)prev;
@end

