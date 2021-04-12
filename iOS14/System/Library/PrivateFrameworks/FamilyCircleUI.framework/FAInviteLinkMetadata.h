/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class FAInviteContext, LPImage, LPLinkMetadata;

@interface FAInviteLinkMetadata : NSObject {

	FAInviteContext* _context;
	LPImage* _image;
	LPImage* _icon;

}

@property (nonatomic,retain) FAInviteContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) LPImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * bubbleMetadata; 
@property (nonatomic,readonly) LPLinkMetadata * mailMetadata; 
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(FAInviteContext *)context;
-(LPImage *)image;
-(void)setContext:(FAInviteContext *)arg1 ;
-(LPLinkMetadata *)bubbleMetadata;
-(LPLinkMetadata *)mailMetadata;
@end

