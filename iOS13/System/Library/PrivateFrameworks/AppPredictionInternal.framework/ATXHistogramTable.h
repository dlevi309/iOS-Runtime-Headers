/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _ATXDataStore, ATXBackgroundSaver;

@interface ATXHistogramTable : NSObject <NSSecureCoding> {

	HTGuardedData _private_unsafeGuardedData;
	unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >* _guardedData;
	_ATXDataStore* _datastore;
	ATXBackgroundSaver* _saver;
	long long _blobType;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)clear;
-(id)allKeys;
-(unsigned short)remove:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)flush;
-(unsigned short)intern:(id)arg1 ;
-(id)initWithDatastore:(id)arg1 ;
-(id)initWithDatastore:(id)arg1 blobType:(long long)arg2 ;
-(id)initWithDict:(id)arg1 usedIds:(id)arg2 datastore:(id)arg3 blobType:(long long)arg4 ;
-(BOOL)lookup:(id)arg1 into:(unsigned short*)arg2 ;
-(id)allKeysFilteredBy:(/*^block*/id)arg1 ;
-(id)histogramTableDict;
@end

