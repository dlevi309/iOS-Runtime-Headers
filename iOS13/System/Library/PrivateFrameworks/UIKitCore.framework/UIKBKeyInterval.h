/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIKBTree;

@interface UIKBKeyInterval : NSObject {

	UIKBTree* _key;
	double _interval;

}

@property (nonatomic,retain) UIKBTree * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double interval;              //@synthesize interval=_interval - In the implementation block
-(void)dealloc;
-(UIKBTree *)key;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setKey:(UIKBTree *)arg1 ;
-(id)initWithKey:(id)arg1 interval:(double)arg2 ;
@end

