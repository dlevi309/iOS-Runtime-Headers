/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(id)init;
-(NSArray *)ids;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)request:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)artworkType;
-(void)setArtworkType:(NSString *)arg1 ;
-(void)setIds:(NSArray *)arg1 ;
-(id)initWithIds:(id)arg1 ;
-(void)setAmsLookup:(AMSLookup *)arg1 ;
-(void)_configureRequest;
-(AMSLookup *)amsLookup;
@end

