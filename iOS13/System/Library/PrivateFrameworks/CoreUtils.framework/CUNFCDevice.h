/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NFTag *)tag;
-(void)setTag:(NFTag *)arg1 ;
-(void)setAdvertisedURI:(NSURL *)arg1 ;
-(NSURL *)advertisedURI;
@end

