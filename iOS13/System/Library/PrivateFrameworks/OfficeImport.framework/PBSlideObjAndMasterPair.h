/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {

	PDSlide* mSlide;
	int mMasterId;

}
+(id)createPair:(id)arg1 masterId:(int)arg2 ;
-(id)slide;
-(void)setSlide:(id)arg1 masterId:(int)arg2 ;
-(int)masterId;
@end

