/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, EDRunsCollection, NSString;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {

	EDResources* mResources;
	int mDefaultTextType;
	unsigned long long mContentFormatId;
	EDRunsCollection* mRuns;
	int mLabelPosition;
	BOOL mShowCategoryLabel;
	BOOL mShowValueLabel;
	BOOL mShowPercentageLabel;
	BOOL mShowSeriesLabel;
	BOOL mShowBubbleSizeLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTextPropertyWithResources:(id)arg1 ;
-(id)runs;
-(NSString *)description;
-(long long)key;
-(int)labelPosition;
-(void)setLabelPosition:(int)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setRuns:(id)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(int)defaultTextType;
-(void)setDefaultTextType:(int)arg1 ;
-(BOOL)isShowCategoryLabel;
-(void)setIsShowCategoryLabel:(BOOL)arg1 ;
-(BOOL)isShowValueLabel;
-(void)setIsShowValueLabel:(BOOL)arg1 ;
-(BOOL)isShowPercentageLabel;
-(void)setIsShowPercentageLabel:(BOOL)arg1 ;
-(BOOL)isShowBubbleSizeLabel;
-(void)setIsShowBubbleSizeLabel:(BOOL)arg1 ;
-(BOOL)isShowSeriesLabel;
-(void)setIsShowSeriesLabel:(BOOL)arg1 ;
@end

