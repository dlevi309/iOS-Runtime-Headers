/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)domain;
-(NSDictionary *)fingerprintsToCorrections;
-(NSDictionary *)fingerprintsToClassifications;
-(id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

