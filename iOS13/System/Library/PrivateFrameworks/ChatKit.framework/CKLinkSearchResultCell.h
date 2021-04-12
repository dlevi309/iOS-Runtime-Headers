/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                      //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkView *)linkView;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)_metadataGenerated:(id)arg1 ;
-(void)_updateForLinkMetadataWithResult:(id)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
@end

