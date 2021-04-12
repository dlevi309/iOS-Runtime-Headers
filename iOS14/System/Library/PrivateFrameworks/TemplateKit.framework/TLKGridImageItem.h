/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKArrangementItem.h>
#import <libobjc.A.dylib/TLKGridArrangementItem.h>

@class NUISizeCache, NSString;

@interface TLKGridImageItem : TLKArrangementItem <TLKGridArrangementItem> {

	unsigned long long row;
	double horizontalHuggingPriority;
	double horizontalCompressionResistance;
	NUISizeCache* sizeCache;
	NSRange columnRange;
	CGRect frame;

}

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) NSRange columnRange; 
@property (assign,nonatomic) unsigned long long row; 
@property (assign,nonatomic) double horizontalHuggingPriority; 
@property (assign,nonatomic) double horizontalCompressionResistance; 
@property (nonatomic,retain) NUISizeCache * sizeCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUISizeCache *)sizeCache;
-(unsigned long long)row;
-(void)setSizeCache:(NUISizeCache *)arg1 ;
-(double)horizontalCompressionResistance;
-(double)horizontalHuggingPriority;
-(CGSize)sizeForTargetSize:(CGSize)arg1 ;
-(NSRange)columnRange;
-(void)setColumnRange:(NSRange)arg1 ;
-(void)setHorizontalHuggingPriority:(double)arg1 ;
-(void)setHorizontalCompressionResistance:(double)arg1 ;
-(CGRect)frame;
-(void)setRow:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)setFrame:(CGRect)arg1 ;
@end

