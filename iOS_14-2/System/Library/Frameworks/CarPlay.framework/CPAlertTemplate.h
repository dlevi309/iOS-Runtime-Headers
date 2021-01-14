/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPAlertDelegate.h>

@class NSArray, NSString;

@interface CPAlertTemplate : CPTemplate <CPAlertDelegate> {

	NSArray* _titleVariants;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CPAlertDelegate> templateDelegate; 
@property (nonatomic,copy,readonly) NSArray * titleVariants;                           //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                      //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)maximumActionCount;
-(NSArray *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_addAction:(id)arg1 ;
-(void)handleAlertActionForIdentifier:(id)arg1 ;
-(NSArray *)titleVariants;
-(id)initWithTitleVariants:(id)arg1 actions:(id)arg2 ;
@end

