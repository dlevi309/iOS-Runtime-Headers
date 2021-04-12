/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSString;

@interface REElementComplicationAction : REElementAction {

	NSString* _slotIdentifier;

}

@property (nonatomic,readonly) NSString * slotIdentifier;              //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(NSString *)slotIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithSlotIdentifier:(id)arg1 ;
@end

