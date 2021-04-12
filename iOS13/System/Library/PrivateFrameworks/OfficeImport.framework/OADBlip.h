/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADSubBlip;

@interface OADBlip : NSObject {

	unsigned mReferenceCount;
	OADSubBlip* mMainSubBlip;
	OADSubBlip* mAltSubBlip;

}
+(id)pathExtensionForBlipType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned*)referenceCount;
-(id)mainSubBlip;
-(void)setMainSubBlip:(id)arg1 ;
-(void)setAltSubBlip:(id)arg1 ;
-(id)altSubBlip;
@end

