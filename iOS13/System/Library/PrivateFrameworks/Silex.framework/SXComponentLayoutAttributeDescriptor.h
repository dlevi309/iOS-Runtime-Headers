/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentDependencyDescriptor.h>

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor {

	BOOL _ignoreMargins;
	int _fromLayoutAttribute;
	int _toLayoutAttribute;

}

@property (assign,nonatomic) int fromLayoutAttribute;              //@synthesize fromLayoutAttribute=_fromLayoutAttribute - In the implementation block
@property (assign,nonatomic) int toLayoutAttribute;                //@synthesize toLayoutAttribute=_toLayoutAttribute - In the implementation block
@property (assign,nonatomic) BOOL ignoreMargins;                   //@synthesize ignoreMargins=_ignoreMargins - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(int)toLayoutAttribute;
-(BOOL)ignoreMargins;
-(int)fromLayoutAttribute;
-(id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(void)setFromLayoutAttribute:(int)arg1 ;
-(void)setToLayoutAttribute:(int)arg1 ;
-(void)setIgnoreMargins:(BOOL)arg1 ;
@end

