/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLabel:(id)arg1 ;
-(void)reset;
-(NSString *)label;
-(jetsam_info)currentInfo;
-(BOOL)waitUntilDirtyMemoryDrained;
-(void)logCurrentInterval;
-(BOOL)waitUntilDirtyMemoryReaches:(long long)arg1 maxWaitMS:(int)arg2 ;
-(jetsam_info)startInfo;
@end

