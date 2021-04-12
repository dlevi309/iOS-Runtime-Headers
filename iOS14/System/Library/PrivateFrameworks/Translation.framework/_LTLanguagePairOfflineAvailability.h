/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _LTLocalePair, NSString;

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding> {

	BOOL _needsUpdate;
	unsigned long long _pairState;
	_LTLocalePair* _pair;
	NSString* _sourceASRState;
	NSString* _targetASRState;
	NSString* _mtState;
	NSString* _sourceTTSState;
	NSString* _targetTTSState;

}

@property (assign,nonatomic) unsigned long long pairState;              //@synthesize pairState=_pairState - In the implementation block
@property (nonatomic,retain) _LTLocalePair * pair;                      //@synthesize pair=_pair - In the implementation block
@property (nonatomic,retain) NSString * sourceASRState;                 //@synthesize sourceASRState=_sourceASRState - In the implementation block
@property (nonatomic,retain) NSString * targetASRState;                 //@synthesize targetASRState=_targetASRState - In the implementation block
@property (nonatomic,retain) NSString * mtState;                        //@synthesize mtState=_mtState - In the implementation block
@property (nonatomic,retain) NSString * sourceTTSState;                 //@synthesize sourceTTSState=_sourceTTSState - In the implementation block
@property (nonatomic,retain) NSString * targetTTSState;                 //@synthesize targetTTSState=_targetTTSState - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                          //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(NSString *)sourceASRState;
-(NSString *)sourceTTSState;
-(NSString *)targetTTSState;
-(id)initWithLocales:(id)arg1 ;
-(void)setMtState:(NSString *)arg1 ;
-(void)setSourceASRState:(NSString *)arg1 ;
-(void)setTargetASRState:(NSString *)arg1 ;
-(void)setPairState:(unsigned long long)arg1 ;
-(NSString *)targetASRState;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceTTSState:(NSString *)arg1 ;
-(void)setTargetTTSState:(NSString *)arg1 ;
-(unsigned long long)pairState;
-(_LTLocalePair *)pair;
-(id)description;
-(NSString *)mtState;
-(void)setPair:(_LTLocalePair *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

