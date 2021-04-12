/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction {

	/*^block*/id _action;

}

@property (nonatomic,readonly) id action;              //@synthesize action=_action - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)action;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(void)_performWithContext:(id)arg1 ;
@end

