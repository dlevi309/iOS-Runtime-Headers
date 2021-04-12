/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSString, NTKJetsamInfoFetcher;

@interface NTKJetsamInfoInterval : NSObject {

	NSString* _label;
	NTKJetsamInfoFetcher* _fetcher;
	jetsam_info _startInfo;

}

@property (nonatomic,readonly) NSString * label;                     //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) jetsam_info startInfo;                //@synthesize startInfo=_startInfo - In the implementation block
@property (nonatomic,readonly) jetsam_info currentInfo; 
-(void)reset;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(jetsam_info)currentInfo;
-(BOOL)waitUntilDirtyMemoryDrained;
-(void)logCurrentInterval;
-(BOOL)waitUntilDirtyMemoryReaches:(long long)arg1 maxWaitMS:(int)arg2 ;
-(jetsam_info)startInfo;
@end

