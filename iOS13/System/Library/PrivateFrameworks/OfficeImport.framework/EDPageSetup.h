/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDPageSetup : NSObject {

	int mOrientation;
	int mPageOrder;
	BOOL mCustomFirstPageNumber;
	unsigned long long mFirstPageNumber;
	unsigned long long mFitToHeight;
	unsigned long long mFitToWidth;
	unsigned long long mScale;
	float mLeftMargin;
	float mRightMargin;
	float mTopMargin;
	float mBottomMargin;
	float mHeaderMargin;
	float mFooterMargin;

}
+(id)pageSetup;
-(id)init;
-(id)description;
-(int)order;
-(unsigned long long)scale;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setScale:(unsigned long long)arg1 ;
-(void)setLeftMargin:(float)arg1 ;
-(void)setRightMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(float)topMargin;
-(void)setOrder:(int)arg1 ;
-(float)rightMargin;
-(float)bottomMargin;
-(float)leftMargin;
-(float)headerMargin;
-(void)setFirstPageNumber:(unsigned long long)arg1 ;
-(void)setCustomFirstPageNumber:(BOOL)arg1 ;
-(void)setFitToHeight:(unsigned long long)arg1 ;
-(void)setFitToWidth:(unsigned long long)arg1 ;
-(void)setHeaderMargin:(float)arg1 ;
-(void)setFooterMargin:(float)arg1 ;
-(BOOL)customFirstPageNumber;
-(unsigned long long)firstPageNumber;
-(unsigned long long)fitToHeight;
-(unsigned long long)fitToWidth;
-(float)footerMargin;
@end

