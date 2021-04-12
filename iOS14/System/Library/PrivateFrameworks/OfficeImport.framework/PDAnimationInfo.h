/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

