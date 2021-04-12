/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSString;

@interface REElementComplicationAction : REElementAction {

	NSString* _slotIdentifier;

}

@property (nonatomic,readonly) NSString * slotIdentifier;              //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)slotIdentifier;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithSlotIdentifier:(id)arg1 ;
@end

