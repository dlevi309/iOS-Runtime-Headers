/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVectorTextLayoutParameters.h>
@class NSAttributedString, UITraitCollection;


@protocol _UIVectorTextLayoutParameters <NSObject>
@property (nonatomic,copy,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (nonatomic,readonly) CGSize withinSize; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) long long lineBreakMode; 
@required
-(long long)lineBreakMode;
-(UITraitCollection *)traitCollection;
-(unsigned long long)numberOfLines;
-(NSAttributedString *)attributedText;
-(CGSize)withinSize;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UITraitCollection, NSString;

@interface _UIVectorTextLayoutParameters : NSObject <_UIVectorTextLayoutParameters, NSCopying> {

	NSAttributedString* _attributedText;
	unsigned long long _numberOfLines;
	UITraitCollection* _traitCollection;
	long long _lineBreakMode;
	CGSize _withinSize;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                 //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) CGSize withinSize;                                //@synthesize withinSize=_withinSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                          //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parametersSuitableForView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned long long)numberOfLines;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(BOOL)isEqualToParameters:(id)arg1 ;
-(void)setWithinSize:(CGSize)arg1 ;
-(CGSize)withinSize;
-(void)_copyFromParameters:(id)arg1 ;
@end

