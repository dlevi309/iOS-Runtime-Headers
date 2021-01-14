/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class NSString;

@interface SNBoxRecordingInfo : NSObject {

	NSString* _boxName;
	long long _busIndex;
	NSString* _fileName;

}

@property (retain) NSString * boxName;               //@synthesize boxName=_boxName - In the implementation block
@property (assign) long long busIndex;               //@synthesize busIndex=_busIndex - In the implementation block
@property (retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(NSString *)boxName;
-(void)setBoxName:(NSString *)arg1 ;
-(long long)busIndex;
-(void)setBusIndex:(long long)arg1 ;
@end

