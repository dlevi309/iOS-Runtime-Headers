/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIFamilySharingRelationship;

@interface VUIFamilySharingRelationships : NSObject {

	VUIFamilySharingRelationship* _season;
	VUIFamilySharingRelationship* _show;

}

@property (nonatomic,retain) VUIFamilySharingRelationship * season;              //@synthesize season=_season - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationship * show;                //@synthesize show=_show - In the implementation block
-(VUIFamilySharingRelationship *)show;
-(void)setShow:(VUIFamilySharingRelationship *)arg1 ;
-(void)setSeason:(VUIFamilySharingRelationship *)arg1 ;
-(VUIFamilySharingRelationship *)season;
@end

