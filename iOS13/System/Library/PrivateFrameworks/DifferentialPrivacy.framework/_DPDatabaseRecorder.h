/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(_DPStorage *)db;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4 ;
-(NSSet *)blacklistSet;
-(unsigned long long)puzzlePieceCount;
@end

