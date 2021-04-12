/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutContainer_Private.h>

@protocol _UIContentInsetsEnvironment;
@class NSString;

@interface _UICollectionLayoutContainer : NSObject <_UICollectionLayoutContainer_Private> {

	id<_UIContentInsetsEnvironment> _insetsEnvironment;
	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (assign,nonatomic) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) id<_UIContentInsetsEnvironment> insetsEnvironment;              //@synthesize insetsEnvironment=_insetsEnvironment - In the implementation block
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)initWithContentSize:(CGSize)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 insetsEnvironment:(id)arg3 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)contentSize;
-(id)initWithContentSize:(CGSize)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 ;
-(NSString *)description;
-(CGSize)effectiveContentSize;
-(id<_UIContentInsetsEnvironment>)insetsEnvironment;
-(NSDirectionalEdgeInsets)effectiveContentInsets;
-(void)setInsetsEnvironment:(id<_UIContentInsetsEnvironment>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

