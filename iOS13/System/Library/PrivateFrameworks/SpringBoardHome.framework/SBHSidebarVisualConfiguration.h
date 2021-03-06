/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _contentWidth;
	NSDirectionalEdgeInsets _insets;

}

@property (assign,nonatomic) double contentWidth;                         //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)contentWidth;
-(NSDirectionalEdgeInsets)insets;
-(void)setInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setContentWidth:(double)arg1 ;
@end

