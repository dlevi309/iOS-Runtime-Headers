/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject {

	AXMAudioDataSource* _inputSource;

}

@property (assign,nonatomic,__weak) AXMAudioDataSource * inputSource;              //@synthesize inputSource=_inputSource - In the implementation block
-(AXMAudioDataSource *)inputSource;
-(void)setInputSource:(AXMAudioDataSource *)arg1 ;
-(void)processSamples:(unsigned long long)arg1 ;
@end

