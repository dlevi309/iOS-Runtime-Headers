/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {

	BOOL mHasTransition;
	int mTransition;
	NSMutableDictionary* mPropertyMap;

}

@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
-(id)init;
-(BOOL)hasProperties;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(NSMutableDictionary *)propertyMap;
-(BOOL)hasTransition;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
@end

