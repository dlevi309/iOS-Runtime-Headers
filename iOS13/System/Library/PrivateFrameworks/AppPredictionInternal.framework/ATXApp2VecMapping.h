/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSData;

@interface ATXApp2VecMapping : NSObject {

	NSData* _data;
	header_s _hdr;
	const unsigned short* _matrix;
	const unsigned short* _endOfMatrix;
	CFBurstTrieRef _idxForBundleId;

}

@property (nonatomic,readonly) unsigned long long vectorLength; 
@property (nonatomic,readonly) unsigned long long appCount; 
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)appCount;
-(unsigned long long)vectorLength;
-(BOOL)getVectorForBundleId:(id)arg1 into:(float*)arg2 ;
-(BOOL)getVectorForBundleIdWithGenreBackup:(id)arg1 into:(float*)arg2 ;
@end

