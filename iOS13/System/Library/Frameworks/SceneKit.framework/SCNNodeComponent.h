/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@interface SCNNodeComponent : NSObject {

	long long type;
	id component;
	SCNNodeComponent* next;

}

@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) id component; 
@property (nonatomic,retain) SCNNodeComponent * next; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SCNNodeComponent *)next;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(void)setNext:(SCNNodeComponent *)arg1 ;
-(id)initWithType:(long long)arg1 component:(id)arg2 ;
@end

