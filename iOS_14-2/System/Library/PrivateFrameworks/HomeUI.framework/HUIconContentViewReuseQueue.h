/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)contentViewClass;
-(id)initWithContentViewClass:(Class)arg1 ;
-(NSMutableArray *)reuseStack;
-(id)dequeueContentView;
-(void)reapContentView:(id)arg1 ;
@end

