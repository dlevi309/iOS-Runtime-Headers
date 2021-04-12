/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@class NSString, NSArray, AMSLookup;

@interface IMContentLookupService : NSObject {

	NSString* _profile;
	NSString* _artworkType;
	NSArray* _ids;
	long long _version;
	AMSLookup* _amsLookup;

}

@property (nonatomic,retain) AMSLookup * amsLookup;               //@synthesize amsLookup=_amsLookup - In the implementation block
@property (nonatomic,retain) NSString * profile;                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * artworkType;              //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,retain) NSArray * ids;                       //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) long long version;                   //@synthesize version=_version - In the implementation block
-(NSArray *)ids;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)artworkType;
-(id)init;
-(NSString *)profile;
-(void)setIds:(NSArray *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)request:(/*^block*/id)arg1 ;
-(void)setArtworkType:(NSString *)arg1 ;
-(long long)version;
-(void)setAmsLookup:(AMSLookup *)arg1 ;
-(id)initWithIds:(id)arg1 ;
-(void)_configureRequest;
-(AMSLookup *)amsLookup;
@end

