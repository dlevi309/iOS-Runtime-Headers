/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(unsigned long long)scale;
-(float)leftMargin;
-(id)description;
-(float)topMargin;
-(void)setScale:(unsigned long long)arg1 ;
-(float)bottomMargin;
-(int)orientation;
-(void)setRightMargin:(float)arg1 ;
-(float)rightMargin;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(float)headerMargin;
-(float)footerMargin;
-(void)setHeaderMargin:(float)arg1 ;
-(void)setFooterMargin:(float)arg1 ;
-(void)setFirstPageNumber:(unsigned long long)arg1 ;
-(void)setCustomFirstPageNumber:(BOOL)arg1 ;
-(void)setFitToHeight:(unsigned long long)arg1 ;
-(void)setFitToWidth:(unsigned long long)arg1 ;
-(BOOL)customFirstPageNumber;
-(unsigned long long)firstPageNumber;
-(unsigned long long)fitToHeight;
-(unsigned long long)fitToWidth;
@end

