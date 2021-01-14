/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

