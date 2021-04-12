/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSMediaPreAnalysisModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _sharpnessNode;
	CLSSignalNode* _exposureNode;

}

@property (readonly) CLSSignalNode * sharpnessNode;                           //@synthesize sharpnessNode=_sharpnessNode - In the implementation block
@property (readonly) CLSSignalNode * exposureNode;                            //@synthesize exposureNode=_exposureNode - In the implementation block
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
-(void)setupVersion31;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(unsigned long long)version;
-(CLSSignalNode *)sharpnessNode;
-(void)setupVersion45;
-(CLSSignalNode *)exposureNode;
@end

