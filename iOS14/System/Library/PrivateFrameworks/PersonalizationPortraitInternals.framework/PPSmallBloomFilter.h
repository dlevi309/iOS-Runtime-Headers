/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class _PASBloomFilter, NSString;

@interface PPSmallBloomFilter : NSObject <MLCustomModel> {

	_PASBloomFilter* _bloomFilter;
	opaque_pthread_mutex_t _lock;
	NSString* _inputName;
	NSString* _outputName;

}
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

