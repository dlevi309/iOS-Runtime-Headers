/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentInsetsEnvironment.h>

@protocol _UIContentInsetsEnvironment <NSObject>
@property (nonatomic,readonly) long long insetReference; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets layoutMarginsInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets readableContentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveInsets; 
@required
-(NSDirectionalEdgeInsets)safeAreaInsets;
-(id)layoutContainerForInsetReference:(long long)arg1 containerSize:(CGSize)arg2 layoutAxis:(unsigned long long)arg3;
-(id)layoutContainerForContainerSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2;
-(NSDirectionalEdgeInsets)effectiveInsets;
-(long long)insetReference;
-(NSDirectionalEdgeInsets)layoutMarginsInsets;
-(NSDirectionalEdgeInsets)readableContentInsets;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIContentInsetsEnvironment : NSObject <_UIContentInsetsEnvironment, NSCopying> {

	long long _insetReference;
	NSDirectionalEdgeInsets _safeAreaInsets;
	NSDirectionalEdgeInsets _layoutMarginsInsets;
	NSDirectionalEdgeInsets _readableContentInsets;

}

@property (assign,nonatomic) long long insetReference;                                   //@synthesize insetReference=_insetReference - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets safeAreaInsets;                     //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMarginsInsets;                //@synthesize layoutMarginsInsets=_layoutMarginsInsets - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets readableContentInsets;              //@synthesize readableContentInsets=_readableContentInsets - In the implementation block
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)insetEnvironmentForInsetReference:(long long)arg1 safeAreaInsets:(NSDirectionalEdgeInsets)arg2 layoutMarginsInsets:(NSDirectionalEdgeInsets)arg3 readableContentInsets:(NSDirectionalEdgeInsets)arg4 ;
+(id)insetEnvironmentFromParentEnvironment:(id)arg1 insetReference:(long long)arg2 ;
+(id)insetEnvironmentForView:(id)arg1 insetReference:(long long)arg2 ;
+(id)nullEnvironment;
-(void)setSafeAreaInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)safeAreaInsets;
-(id)initWithInsetReference:(long long)arg1 safeAreaInsets:(NSDirectionalEdgeInsets)arg2 layoutMarginsInsets:(NSDirectionalEdgeInsets)arg3 readableContentInsets:(NSDirectionalEdgeInsets)arg4 ;
-(id)layoutContainerForInsetReference:(long long)arg1 containerSize:(CGSize)arg2 layoutAxis:(unsigned long long)arg3 ;
-(id)layoutContainerForContainerSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 ;
-(NSString *)description;
-(void)setInsetReference:(long long)arg1 ;
-(NSDirectionalEdgeInsets)effectiveInsets;
-(long long)insetReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDirectionalEdgeInsets)layoutMarginsInsets;
-(NSDirectionalEdgeInsets)readableContentInsets;
-(void)setLayoutMarginsInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setReadableContentInsets:(NSDirectionalEdgeInsets)arg1 ;
@end

