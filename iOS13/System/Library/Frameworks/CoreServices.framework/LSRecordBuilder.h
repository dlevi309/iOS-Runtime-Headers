/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class _LSDatabase;

@interface LSRecordBuilder : NSObject {

	_LSDatabase* _db;

}
+(id)recordBuilderForType:(unsigned long long)arg1 ;
-(void)setDatabase:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(unsigned)registerBundleRecord:(id)arg1 error:(id*)arg2 ;
@end

