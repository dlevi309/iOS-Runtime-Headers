/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isSpringBoardElement;
-(BOOL)sb_isTransitioning;

@end


@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (assign,nonatomic) long long layoutRole; 
@property (assign,setter=sb_setTransitioning:,getter=sb_isTransitioning,nonatomic) BOOL sb_transitioning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
-(long long)layoutRole;
-(id)succinctDescriptionBuilder;
-(BOOL)isSpringBoardElement;
-(BOOL)sb_isTransitioning;
-(void)setLayoutRole:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 ;
-(void)sb_setTransitioning:(BOOL)arg1 ;
@end

