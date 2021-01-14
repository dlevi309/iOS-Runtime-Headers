/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder {

	_DPStorage* _db;
	NSSet* _blacklistSet;
	unsigned long long _puzzlePieceCount;

}

@property (nonatomic,readonly) _DPStorage * db;                                  //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSSet * blacklistSet;                             //@synthesize blacklistSet=_blacklistSet - In the implementation block
@property (nonatomic,readonly) unsigned long long puzzlePieceCount;              //@synthesize puzzlePieceCount=_puzzlePieceCount - In the implementation block
-(_DPStorage *)db;
-(id)init;
-(id)description;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4 ;
-(BOOL)isMetadataValid:(id)arg1 ;
-(NSSet *)blacklistSet;
-(unsigned long long)puzzlePieceCount;
@end

