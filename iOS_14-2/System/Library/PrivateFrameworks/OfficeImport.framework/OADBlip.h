/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADSubBlip;

@interface OADBlip : NSObject {

	unsigned mReferenceCount;
	OADSubBlip* mMainSubBlip;
	OADSubBlip* mAltSubBlip;

}
+(id)pathExtensionForBlipType:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned*)referenceCount;
-(id)mainSubBlip;
-(void)setMainSubBlip:(id)arg1 ;
-(void)setAltSubBlip:(id)arg1 ;
-(id)altSubBlip;
@end

