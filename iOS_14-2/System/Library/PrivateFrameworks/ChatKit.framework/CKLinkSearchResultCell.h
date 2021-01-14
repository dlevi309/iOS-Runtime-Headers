/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class NSString, LPLinkView, LPLinkMetadata;

@interface CKLinkSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	NSString* _identifier;
	LPLinkView* _linkView;
	LPLinkMetadata* _linkMetadata;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                                                     //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;                                             //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(LPLinkMetadata *)linkMetadata;
-(LPLinkView *)linkView;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(void)_metadataGenerated:(id)arg1 ;
-(void)_updateForLinkMetadataWithResult:(id)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(NSString *)identifier;
@end

