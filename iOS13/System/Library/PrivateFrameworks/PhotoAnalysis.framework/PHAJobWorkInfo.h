/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString;

@interface PHAJobWorkInfo : NSObject {

	int _workerFlags;
	NSString* _assetLocalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (assign,nonatomic) int workerFlags;                                     //@synthesize workerFlags=_workerFlags - In the implementation block
-(void)setWorkerFlags:(int)arg1 ;
-(int)workerFlags;
-(NSString *)assetLocalIdentifier;
-(id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2 ;
@end

