/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UILabel, NSHashTable, NSCache;

@interface _UIDatePickerLinkedLabelStorage : NSObject {

	UILabel* _sizingLabel;
	NSHashTable* _attachedLabels;
	unsigned long long _currentPriority;
	NSCache* _sizeCache;

}
-(id)init;
-(void)_attachLabel:(id)arg1 ;
-(void)_notifyAllLabelsExcept:(id)arg1 ;
-(BOOL)_cachedSizeForKey:(id)arg1 size:(CGSize*)arg2 ;
-(void)_setCachedSize:(CGSize)arg1 forKey:(id)arg2 ;
-(unsigned long long)_requiresLowerPriority:(id)arg1 ;
-(unsigned long long)_currentPriority;
-(CGSize)_sizeForText:(id)arg1 font:(id)arg2 height:(double)arg3 ;
-(void)_detachLabel:(id)arg1 ;
-(void)_resetPriority;
@end

