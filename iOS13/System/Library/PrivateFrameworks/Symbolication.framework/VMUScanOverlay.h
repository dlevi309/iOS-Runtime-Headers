/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class NSMutableArray, NSArray;

@interface VMUScanOverlay : NSObject {

	NSMutableArray* _rules;

}

@property (nonatomic,readonly) NSArray * refinementRules;              //@synthesize rules=_rules - In the implementation block
+(id)defaultOverlayWithScanner:(id)arg1 ;
+(id)defaultOverlay;
-(id)initWithScanner:(id)arg1 ;
-(void)addMetadataRefinementRule:(/*^block*/id)arg1 ;
-(NSArray *)refinementRules;
@end

