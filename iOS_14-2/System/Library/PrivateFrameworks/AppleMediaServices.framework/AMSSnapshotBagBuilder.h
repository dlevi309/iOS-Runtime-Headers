/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSDate, AMSProcessInfo, NSString;

@interface AMSSnapshotBagBuilder : NSObject {

	NSDictionary* _data;
	NSDate* _expirationDate;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
-(AMSProcessInfo *)processInfo;
-(void)setProfile:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(NSDictionary *)data;
-(id)buildWithError:(id*)arg1 ;
-(NSString *)profileVersion;
@end

