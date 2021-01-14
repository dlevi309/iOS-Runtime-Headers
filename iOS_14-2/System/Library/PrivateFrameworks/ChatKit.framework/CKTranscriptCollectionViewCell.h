/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKTranscriptCellProtocol.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewCellProtocol.h>

@class UILabel, NSString;

@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol> {

	BOOL _wantsDrawerLayout;
	char _orientation;
	UILabel* _debugLabel;
	double _drawerPercentRevealed;
	double _associatedItemOffset;

}

@property (nonatomic,retain) UILabel * debugLabel;                      //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) BOOL wantsDrawerLayout;                    //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;              //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (assign,nonatomic) double associatedItemOffset;               //@synthesize associatedItemOffset=_associatedItemOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)clearFilters;
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(UILabel *)debugLabel;
-(BOOL)wantsDrawerLayout;
-(char)orientation;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setAssociatedItemOffset:(double)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(void)setOrientation:(char)arg1 ;
@end

