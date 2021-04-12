/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSProfile : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)identifier;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
-(id)init;
-(id)description;
-(NSString *)uuid;
-(id)uniqueIdentifier;
-(void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
@end

