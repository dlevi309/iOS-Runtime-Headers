/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXCollectionContentDisplay <SXContentDisplay>
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) SXConvertibleValue gutter; 
@property (nonatomic,readonly) SXConvertibleValue rowSpacing; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long distribution; 
@property (nonatomic,readonly) unsigned long long widows; 
@property (nonatomic,readonly) BOOL variableSizing; 
@required
-(unsigned long long)alignment;
-(unsigned long long)distribution;
-(SXConvertibleValue)maximumWidth;
-(SXConvertibleValue)minimumWidth;
-(SXConvertibleValue)rowSpacing;
-(unsigned long long)widows;
-(SXConvertibleValue)gutter;
-(BOOL)variableSizing;

@end

