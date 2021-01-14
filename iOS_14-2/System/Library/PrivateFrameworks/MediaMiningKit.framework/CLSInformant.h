/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSInformant : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)identifier;
+(id)familyIdentifier;
+(id)supportedOutputClueKeys;
-(NSString *)uuid;
-(id)init;
-(id)uniqueIdentifier;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

