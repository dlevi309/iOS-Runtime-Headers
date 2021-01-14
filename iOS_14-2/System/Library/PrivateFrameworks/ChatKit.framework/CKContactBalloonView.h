/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(void)addOverlaySubview:(id)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(UIImageView *)chevron;
-(void)configureForComposition:(id)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(CKMediaObject *)mediaObject;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UILabel *)nameLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(UILabel *)organizationLabel;
-(void)setOrganizationLabel:(UILabel *)arg1 ;
-(id)_truncateNameIfNeeded:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

