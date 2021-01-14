/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSMutableDictionary;

@interface PKInkManager : NSObject {

	NSMutableDictionary* _inks;

}

@property (nonatomic,readonly) NSMutableDictionary * inks;              //@synthesize inks=_inks - In the implementation block
+(void)clearCachedManager;
+(id)defaultInkManager;
-(NSMutableDictionary *)inks;
-(id)init;
-(id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
-(id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2 ;
@end

