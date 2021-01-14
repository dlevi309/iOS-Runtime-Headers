/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature {

	BOOL _widthExpands;
	BOOL _multiline;
	unsigned long long _flags;
	unsigned long long _alignment;
	AKFormFeatureLine* _baseline;
	CGRect _enclosingRegionRect;

}

@property (assign,nonatomic) unsigned long long flags;                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL widthExpands;                              //@synthesize widthExpands=_widthExpands - In the implementation block
@property (assign,getter=isMultiline,nonatomic) BOOL multiline;              //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) AKFormFeatureLine * baseline;                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                     //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
+(id)boxWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(AKFormFeatureLine *)baseline;
-(unsigned long long)alignment;
-(unsigned long long)flags;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setMultiline:(BOOL)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isMultiline;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(BOOL)widthExpands;
-(void)setWidthExpands:(BOOL)arg1 ;
@end

