/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIAppearanceCustomizableClassInfo : NSObject {

	BOOL _isGuideClassRoot;
	BOOL _isCustomizableViewClassRoot;
	NSString* _classReferenceKey;
	unsigned long long _hash;
	Class _customizableViewClass;
	Class _guideClass;

}

@property (nonatomic,readonly) Class _customizableViewClass;               //@synthesize customizableViewClass=_customizableViewClass - In the implementation block
@property (nonatomic,readonly) Class _guideClass;                          //@synthesize guideClass=_guideClass - In the implementation block
@property (nonatomic,readonly) NSString * _classReferenceKey;              //@synthesize classReferenceKey=_classReferenceKey - In the implementation block
@property (nonatomic,readonly) unsigned long long _hash;                   //@synthesize hash=_hash - In the implementation block
+(id)_cachedClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2 ;
+(id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2 ;
-(id)_superClassInfo;
-(Class)_guideClass;
-(id)description;
-(Class)_customizableViewClass;
-(unsigned long long)hash;
-(NSString *)_classReferenceKey;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)_hash;
@end

