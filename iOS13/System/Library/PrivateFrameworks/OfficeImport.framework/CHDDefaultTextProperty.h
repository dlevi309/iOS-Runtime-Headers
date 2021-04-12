/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(long long)key;
-(int)labelPosition;
-(void)setLabelPosition:(int)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(id)runs;
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

