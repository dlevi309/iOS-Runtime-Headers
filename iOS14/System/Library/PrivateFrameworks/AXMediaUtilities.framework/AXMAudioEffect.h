/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject {

	AXMAudioDataSource* _inputSource;

}

@property (assign,nonatomic,__weak) AXMAudioDataSource * inputSource;              //@synthesize inputSource=_inputSource - In the implementation block
-(void)processSamples:(unsigned long long)arg1 ;
-(AXMAudioDataSource *)inputSource;
-(void)setInputSource:(AXMAudioDataSource *)arg1 ;
@end

