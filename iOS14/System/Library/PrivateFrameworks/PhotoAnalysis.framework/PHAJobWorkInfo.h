/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString;

@interface PHAJobWorkInfo : NSObject {

	int _workerFlags;
	NSString* _assetLocalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (assign,nonatomic) int workerFlags;                                     //@synthesize workerFlags=_workerFlags - In the implementation block
-(int)workerFlags;
-(void)setWorkerFlags:(int)arg1 ;
-(NSString *)assetLocalIdentifier;
-(id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2 ;
@end

