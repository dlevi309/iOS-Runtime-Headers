/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject {

	NSMutableDictionary* mMasterIdToMasterInfoMap;
	NSMutableDictionary* mTitleIdToMasterIdMap;

}
+(id)masterLayoutMap;
-(id)init;
-(id)slideLayoutForSlideHolder:(id)arg1 ;
-(id)masterInfoForMasterId:(int)arg1 ;
-(int)masterIdForTitleId:(int)arg1 ;
-(id)masterInfoForSlideHolder:(id)arg1 ;
-(void)setMasterInfo:(id)arg1 forMasterId:(int)arg2 ;
-(id)allMasterIds;
-(void)setMasterId:(int)arg1 forTitleId:(int)arg2 ;
@end

