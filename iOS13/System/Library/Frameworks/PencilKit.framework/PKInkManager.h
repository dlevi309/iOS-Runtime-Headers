/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSMutableDictionary;

@interface PKInkManager : NSObject {

	NSMutableDictionary* _inks;

}

@property (nonatomic,readonly) NSMutableDictionary * inks;              //@synthesize inks=_inks - In the implementation block
+(void)clearCachedManager;
+(id)defaultInkManager;
-(id)init;
-(id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
-(id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2 ;
-(NSMutableDictionary *)inks;
@end

