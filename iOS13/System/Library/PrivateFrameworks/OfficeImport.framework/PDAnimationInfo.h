/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {

	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;
	PDMediaNode* mediaNode;

}

@property (nonatomic,retain) PDAnimationInfoData * mediaData; 
@property (nonatomic,retain) PDMediaNode * mediaNode; 
-(id)description;
-(void)setMediaData:(PDAnimationInfoData *)arg1 ;
-(PDAnimationInfoData *)mediaData;
-(PDMediaNode *)mediaNode;
-(void)setEntranceData:(id)arg1 ;
-(id)entranceData;
-(void)setExitData:(id)arg1 ;
-(id)exitData;
-(void)setMediaNode:(PDMediaNode *)arg1 ;
@end

