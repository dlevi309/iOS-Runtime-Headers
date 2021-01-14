/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSURL, NSUUID, NFTag;

@interface CUNFCDevice : NSObject {

	NSURL* _advertisedURI;
	NSUUID* _identifier;
	NFTag* _tag;

}

@property (nonatomic,retain) NFTag * tag;                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSURL * advertisedURI;              //@synthesize advertisedURI=_advertisedURI - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(void)setTag:(NFTag *)arg1 ;
-(NFTag *)tag;
-(id)description;
-(void)setAdvertisedURI:(NSURL *)arg1 ;
-(NSURL *)advertisedURI;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

