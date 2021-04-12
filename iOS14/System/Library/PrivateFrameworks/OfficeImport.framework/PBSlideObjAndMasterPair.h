/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

