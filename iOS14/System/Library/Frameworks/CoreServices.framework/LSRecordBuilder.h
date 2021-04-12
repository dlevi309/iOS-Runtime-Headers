/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class _LSDatabase;

@interface LSRecordBuilder : NSObject {

	_LSDatabase* _db;

}
+(id)recordBuilderForType:(unsigned long long)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(void)setDatabase:(id)arg1 ;
-(unsigned)registerBundleRecord:(id)arg1 error:(id*)arg2 ;
@end

