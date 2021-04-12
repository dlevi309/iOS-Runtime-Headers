/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary;

@interface NTKInfinityListingAttributes : NSObject {

	NSMutableDictionary* _attributes;

}

@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)attributesWithDictionary:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(id)colorForKey:(id)arg1 ;
-(void)addAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsAttributes:(id)arg1 ignoreKeys:(id)arg2 ;
@end

