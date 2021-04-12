/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKContactBalloonViewProtocol.h>

@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol> {

	CKMediaObject* _mediaObject;
	UIImageView* _chevron;
	UIImageView* _contactImageView;
	UILabel* _nameLabel;
	UILabel* _organizationLabel;

}

@property (nonatomic,retain) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * organizationLabel;                 //@synthesize organizationLabel=_organizationLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
-(NSString *)description;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForDisplay;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(CKMediaObject *)mediaObject;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(UILabel *)organizationLabel;
-(void)setOrganizationLabel:(UILabel *)arg1 ;
-(id)_truncateNameIfNeeded:(id)arg1 ;
@end

