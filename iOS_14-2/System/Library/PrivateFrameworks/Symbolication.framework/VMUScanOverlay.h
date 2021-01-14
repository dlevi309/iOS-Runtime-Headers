/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class NSMutableArray, NSArray;

@interface VMUScanOverlay : NSObject {

	NSMutableArray* _rules;

}

@property (nonatomic,readonly) NSArray * refinementRules;              //@synthesize rules=_rules - In the implementation block
+(id)defaultOverlayWithScanner:(id)arg1 ;
+(id)defaultOverlay;
-(void)addMetadataRefinementRule:(/*^block*/id)arg1 ;
-(NSArray *)refinementRules;
-(id)initWithScanner:(id)arg1 ;
@end

