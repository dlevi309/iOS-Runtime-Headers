/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties {

	OADTextBodyAutoFit* mAutoFit;
	OADTextWarp* mTextWarp;
	float mTopInset;
	float mLeftInset;
	float mBottomInset;
	float mRightInset;
	float mRotation;
	float mColumnSpacing;
	unsigned short mColumnCount;
	unsigned short mTextBodyId;
	unsigned char mTextAnchorType;
	unsigned char mFlowType;
	unsigned char mWrapType;
	unsigned char mVerticalOverflowType;
	unsigned char mHorizontalOverflowType;
	unsigned mRepectFirstLastParagraphSpacing : 1;
	unsigned mIsUpright : 1;
	unsigned mIsAnchorCenter : 1;
	unsigned mIsLeftToRightColumns : 1;
	unsigned mHasVerticalOverflowType : 1;
	unsigned mHasHorizontalOverflowType : 1;
	unsigned mHasTextBodyId : 1;
	unsigned mHasFlowType : 1;
	unsigned mHasWrapType : 1;
	unsigned mHasTextAnchorType : 1;
	unsigned mHasIsAnchorCenter : 1;
	unsigned mHasIsUpright : 1;
	unsigned mHasRotation : 1;
	unsigned mHasColumnCount : 1;
	unsigned mHasColumnSpacing : 1;
	unsigned mHasIsLeftToRightColumns : 1;
	unsigned mHasRepectFirstLastParagraphSpacing : 1;
	unsigned mHasTopInset : 1;
	unsigned mHasLeftInset : 1;
	unsigned mHasRightInset : 1;
	unsigned mHasBottomInset : 1;

}
+(id)defaultProperties;
+(id)defaultEscherWordArtProperties;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)columnCount;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(float)topInset;
-(void)setTopInset:(float)arg1 ;
-(float)leftInset;
-(float)bottomInset;
-(float)rightInset;
-(id)initWithDefaults;
-(void)setLeftInset:(float)arg1 ;
-(void)setBottomInset:(float)arg1 ;
-(void)setRightInset:(float)arg1 ;
-(void)setColumnCount:(int)arg1 ;
-(void)setColumnSpacing:(float)arg1 ;
-(float)columnSpacing;
-(BOOL)hasRotation;
-(unsigned char)flowType;
-(void)setFlowType:(unsigned char)arg1 ;
-(unsigned char)wrapType;
-(BOOL)hasTopInset;
-(BOOL)hasLeftInset;
-(BOOL)hasBottomInset;
-(BOOL)hasRightInset;
-(unsigned char)textAnchorType;
-(void)setIsLeftToRightColumns:(BOOL)arg1 ;
-(void)setRespectLastFirstLineSpacing:(BOOL)arg1 ;
-(void)setIsAnchorCenter:(BOOL)arg1 ;
-(void)setTextAnchorType:(unsigned char)arg1 ;
-(void)setIsUpright:(BOOL)arg1 ;
-(void)setAutoFit:(id)arg1 ;
-(void)setTextWarp:(id)arg1 ;
-(void)setWrapType:(unsigned char)arg1 ;
-(void)setVerticalOverflowType:(unsigned char)arg1 ;
-(void)setHorizontalOverflowType:(unsigned char)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasFlowType;
-(BOOL)hasTextAnchorType;
-(BOOL)hasIsAnchorCenter;
-(BOOL)hasHorizontalOverflowType;
-(BOOL)isAnchorCenter;
-(unsigned char)horizontalOverflowType;
-(BOOL)hasRespectLastFirstLineSpacing;
-(BOOL)hasColumnCount;
-(BOOL)hasColumnSpacing;
-(BOOL)hasIsLeftToRightColumns;
-(BOOL)hasAutoFit;
-(BOOL)hasWrapType;
-(BOOL)hasVerticalOverflowType;
-(BOOL)hasTextWarp;
-(id)textWarp;
-(BOOL)hasIsUpright;
-(id)autoFit;
-(int)textBodyId;
-(void)setTextBodyId:(int)arg1 ;
-(unsigned char)verticalOverflowType;
-(BOOL)respectLastFirstLineSpacing;
-(BOOL)isUpright;
-(BOOL)isLeftToRightColumns;
-(BOOL)hasTextBodyId;
-(BOOL)isWarped;
@end

