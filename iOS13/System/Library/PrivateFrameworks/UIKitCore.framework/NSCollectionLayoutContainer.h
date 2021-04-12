/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCollectionLayoutContainer.h>

@protocol NSCollectionLayoutContainer <NSObject>
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
@required
-(CGSize)contentSize;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)effectiveContentSize;
-(NSDirectionalEdgeInsets)effectiveContentInsets;

@end


@class NSString;

@interface NSCollectionLayoutContainer : NSObject <NSCollectionLayoutContainer> {

	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (assign,nonatomic) CGSize contentSize;                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
-(NSString *)description;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)effectiveContentSize;
-(id)initWithContentSize:(CGSize)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)effectiveContentInsets;
@end

