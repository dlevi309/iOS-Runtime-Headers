/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSFaceModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _qualityNode;

}

@property (readonly) CLSSignalNode * qualityNode;                             //@synthesize qualityNode=_qualityNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)currentAnalyzerVersion;
+(unsigned long long)latestVersion;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(CLSSignalNode *)qualityNode;
-(unsigned long long)version;
-(void)setupVersion1;
@end

