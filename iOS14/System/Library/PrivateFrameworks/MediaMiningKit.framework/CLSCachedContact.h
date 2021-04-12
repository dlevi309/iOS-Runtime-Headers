/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSCachedContact : NSObject {

	BOOL _hasPicture;
	NSString* _contactIdentifier;
	NSString* _classifiedPersonLocalIdentifierWithFaceModelID;
	double _updateTimestamp;

}

@property (nonatomic,retain) NSString * contactIdentifier;                                           //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPicture;                                                        //@synthesize hasPicture=_hasPicture - In the implementation block
@property (nonatomic,retain) NSString * classifiedPersonLocalIdentifierWithFaceModelID;              //@synthesize classifiedPersonLocalIdentifierWithFaceModelID=_classifiedPersonLocalIdentifierWithFaceModelID - In the implementation block
@property (assign,nonatomic) double updateTimestamp;                                                 //@synthesize updateTimestamp=_updateTimestamp - In the implementation block
-(NSString *)contactIdentifier;
-(id)init;
-(id)description;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSString *)classifiedPersonLocalIdentifierWithFaceModelID;
-(double)updateTimestamp;
-(void)setUpdateTimestamp:(double)arg1 ;
-(void)setHasPicture:(BOOL)arg1 ;
-(void)setClassifiedPersonLocalIdentifierWithFaceModelID:(NSString *)arg1 ;
-(BOOL)hasPicture;
@end

