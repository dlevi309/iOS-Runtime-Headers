/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKTranscriptCellProtocol <NSObject>
@property (assign,nonatomic) BOOL wantsDrawerLayout; 
@property (assign,nonatomic) char orientation; 
@property (assign,nonatomic) double drawerPercentRevealed; 
@property (assign,nonatomic) double associatedItemOffset; 
@required
-(void)clearFilters;
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(/*^block*/id)arg1;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)performRemoval:(/*^block*/id)arg1;
-(void)addFilter:(id)arg1;
-(void)performHide:(/*^block*/id)arg1;
-(void)performReveal:(/*^block*/id)arg1;
-(BOOL)wantsDrawerLayout;
-(char)orientation;
-(void)setDrawerPercentRevealed:(double)arg1;
-(void)setAssociatedItemOffset:(double)arg1;
-(void)setWantsDrawerLayout:(BOOL)arg1;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(void)setOrientation:(char)arg1;

@end

