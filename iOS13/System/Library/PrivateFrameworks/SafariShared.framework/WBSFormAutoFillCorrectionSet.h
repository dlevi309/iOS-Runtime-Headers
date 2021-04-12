/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDictionary;

@interface WBSFormAutoFillCorrectionSet : NSObject {

	NSString* _domain;
	NSDictionary* _fingerprintsToClassifications;
	NSDictionary* _fingerprintsToCorrections;

}

@property (nonatomic,readonly) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSDictionary * fingerprintsToClassifications;              //@synthesize fingerprintsToClassifications=_fingerprintsToClassifications - In the implementation block
@property (nonatomic,readonly) NSDictionary * fingerprintsToCorrections;                  //@synthesize fingerprintsToCorrections=_fingerprintsToCorrections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(NSDictionary *)fingerprintsToCorrections;
-(NSDictionary *)fingerprintsToClassifications;
-(id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2 ;
-(id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2 ;
@end

