/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance {

	NSDictionary* _propertiesToMatch;

}

@property (setter=_setPropertiesToMatch:,nonatomic,retain) NSDictionary * _propertiesToMatch;              //@synthesize propertiesToMatch=_propertiesToMatch - In the implementation block
+(id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(id)_appearanceObjectKeyForProperties:(id)arg1 ;
-(NSDictionary *)_propertiesToMatch;
-(void)_setPropertiesToMatch:(id)arg1 ;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(BOOL)_isRecordingInvocations;
-(void)dealloc;
@end

