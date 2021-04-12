/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject {

	Class _contentViewClass;
	NSMutableArray* _reuseStack;

}

@property (nonatomic,readonly) NSMutableArray * reuseStack;              //@synthesize reuseStack=_reuseStack - In the implementation block
@property (nonatomic,readonly) Class contentViewClass;                   //@synthesize contentViewClass=_contentViewClass - In the implementation block
+(id)globalReuseQueueForContentViewClass:(Class)arg1 ;
-(id)init;
-(id)initWithContentViewClass:(Class)arg1 ;
-(NSMutableArray *)reuseStack;
-(Class)contentViewClass;
-(id)dequeueContentView;
-(void)reapContentView:(id)arg1 ;
@end

