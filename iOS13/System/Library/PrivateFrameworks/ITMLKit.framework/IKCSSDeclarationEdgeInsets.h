/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)stringValue;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(void)setEdgeFlag:(unsigned long long)arg1 ;
-(unsigned long long)edgeFlag;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end

