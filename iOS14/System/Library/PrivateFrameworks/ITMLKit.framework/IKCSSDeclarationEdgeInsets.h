/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {

	BOOL _insetsFound;
	unsigned long long _edgeFlag;
	UIEdgeInsets _insets;

}

@property (assign) UIEdgeInsets insets;                      //@synthesize insets=_insets - In the implementation block
@property (assign) unsigned long long edgeFlag;              //@synthesize edgeFlag=_edgeFlag - In the implementation block
@property (assign) BOOL insetsFound;                         //@synthesize insetsFound=_insetsFound - In the implementation block
-(id)stringValue;
-(id)description;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(void)setEdgeFlag:(unsigned long long)arg1 ;
-(unsigned long long)edgeFlag;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end

