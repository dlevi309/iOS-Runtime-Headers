/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSProfile : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)supportedMeaningClueKeys;
+(id)profileDependenciesIdentifiers;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)identifier;
-(NSString *)uuid;
-(id)init;
-(id)uniqueIdentifier;
-(id)description;
-(void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
@end

