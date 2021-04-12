/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


@class NSString;

@interface PCSAccountManager : NSObject {

	NSString* _dsid;

}

@property (retain) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(unsigned long long)accountStatus;
-(id)initWithDSID:(id)arg1 ;
@end

