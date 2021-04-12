/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(double)updateTimestamp;
-(BOOL)hasPicture;
-(void)setHasPicture:(BOOL)arg1 ;
-(NSString *)classifiedPersonLocalIdentifierWithFaceModelID;
-(void)setClassifiedPersonLocalIdentifierWithFaceModelID:(NSString *)arg1 ;
-(void)setUpdateTimestamp:(double)arg1 ;
@end

