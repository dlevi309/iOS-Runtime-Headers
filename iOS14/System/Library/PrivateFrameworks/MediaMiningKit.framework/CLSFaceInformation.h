/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSFaceInformation : NSObject {

	unsigned _faceSizeIsGood : 1;
	unsigned _faceIsGood : 1;
	unsigned _faceIsOk : 1;
	BOOL _isKnownPerson;
	BOOL _isHiddenPerson;
	double _faceSize;
	double _faceQuality;

}

@property (readonly) double faceSize;                  //@synthesize faceSize=_faceSize - In the implementation block
@property (readonly) double faceQuality;               //@synthesize faceQuality=_faceQuality - In the implementation block
@property (readonly) BOOL isKnownPerson;               //@synthesize isKnownPerson=_isKnownPerson - In the implementation block
@property (readonly) BOOL isHiddenPerson;              //@synthesize isHiddenPerson=_isHiddenPerson - In the implementation block
@property (readonly) BOOL faceSizeIsGood;              //@synthesize faceSizeIsGood=_faceSizeIsGood - In the implementation block
@property (readonly) BOOL faceIsGood;                  //@synthesize faceIsGood=_faceIsGood - In the implementation block
@property (readonly) BOOL faceIsOk;                    //@synthesize faceIsOk=_faceIsOk - In the implementation block
-(id)description;
-(double)faceSize;
-(double)faceQuality;
-(BOOL)faceIsGood;
-(BOOL)faceIsOk;
-(BOOL)isKnownPerson;
-(id)initForKnownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(id)initForHiddenPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(id)initForUnknownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(BOOL)isHiddenPerson;
-(BOOL)faceSizeIsGood;
@end

