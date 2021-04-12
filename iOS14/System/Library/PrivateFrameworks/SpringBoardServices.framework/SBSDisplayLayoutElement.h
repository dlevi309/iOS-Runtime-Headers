/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <FrontBoardServices/FBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>

@protocol SBSDisplayLayoutElement <NSObject>
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@required
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;

@end


@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (assign,nonatomic) long long layoutRole; 
@property (assign,setter=sb_setTransitioning:,getter=sb_isTransitioning,nonatomic) BOOL sb_transitioning; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sb_setTransitioning:(BOOL)arg1 ;
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;
-(id)succinctDescriptionBuilder;
-(void)setLayoutRole:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 ;
@end

