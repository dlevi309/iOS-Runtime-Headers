/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCNNodeComponent *)next;
-(void)setType:(long long)arg1 ;
-(void)setNext:(SCNNodeComponent *)arg1 ;
-(id)component;
-(long long)type;
-(void)setComponent:(id)arg1 ;
-(id)initWithType:(long long)arg1 component:(id)arg2 ;
@end

