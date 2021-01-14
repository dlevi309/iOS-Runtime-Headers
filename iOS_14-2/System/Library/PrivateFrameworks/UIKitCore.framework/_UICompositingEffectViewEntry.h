/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry {

	NSString* _filterType;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
@end

