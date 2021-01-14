/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSClassificationBasedSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _bloodNode;
	CLSSignalNode* _demonstrationNode;
	CLSSignalNode* _destructionNode;
	CLSSignalNode* _fireDevastationNode;
	CLSSignalNode* _floodDevastationNode;
	CLSSignalNode* _funeralNode;
	CLSSignalNode* _hospitalNode;
	CLSSignalNode* _religiousSettingNode;
	CLSSignalNode* _vehicleCrashNode;
	CLSSignalNode* _warNode;

}

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
-(void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2 ;
-(void)setupVersion32;
-(void)setupVersion33;
-(id)nodeForSignalIdentifier:(unsigned long long)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(BOOL)isResponsibleForSignalIdentifier:(unsigned long long)arg1 ;
-(id)modelInfo;
-(unsigned long long)version;
-(void)setupVersion50_4;
@end

