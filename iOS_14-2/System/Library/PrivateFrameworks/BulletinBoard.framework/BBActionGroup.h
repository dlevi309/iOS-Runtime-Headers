/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBAction.h>

@class NSArray;

@interface BBActionGroup : BBAction {

	NSArray* _actions;

}

@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupWithActions:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

