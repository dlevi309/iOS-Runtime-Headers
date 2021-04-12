/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSAttributedString;


@protocol PXMutableLabelTypesetter
@property (nonatomic,copy) NSAttributedString * attributedString; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) long long typesettingMode; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) BOOL allowTruncation; 
@property (assign,nonatomic) double minimumTruncatedScaleFactor; 
@required
-(CGRect)bounds;
-(unsigned long long)maximumNumberOfLines;
-(void)setAttributedString:(id)arg1;
-(void)setTypesettingMode:(long long)arg1;
-(double)minimumTruncatedScaleFactor;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1;
-(long long)typesettingMode;
-(NSAttributedString *)attributedString;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setBounds:(CGRect)arg1;
-(BOOL)allowTruncation;
-(void)setMinimumScaleFactor:(double)arg1;
-(void)setMinimumTruncatedScaleFactor:(double)arg1;
-(void)setAllowTruncation:(BOOL)arg1;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
-(double)minimumScaleFactor;

@end

