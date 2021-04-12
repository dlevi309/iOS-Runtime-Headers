/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject {

	NSSet* _appLayouts;
	long long _type;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * appLayouts;              //@synthesize appLayouts=_appLayouts - In the implementation block
+(id)suppressionModeNone;
+(id)suppressionModeForAllScenes;
+(id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)appLayouts;
-(BOOL)suppressesSwitcherScenesOnly;
-(BOOL)suppressesAllScenes;
-(id)_initWithAppLayouts:(id)arg1 suppressionType:(long long)arg2 ;
-(BOOL)suppressesNoScenes;
@end

