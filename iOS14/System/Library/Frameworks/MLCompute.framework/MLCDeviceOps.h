/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCDeviceOps : NSObject <NSCopying> {

	id _source;
	id _secondarySource;
	id _tertiarySource;
	id _result;
	unsigned long long _batchSize;

}

@property (nonatomic,retain) id source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id secondarySource;                        //@synthesize secondarySource=_secondarySource - In the implementation block
@property (nonatomic,retain) id tertiarySource;                         //@synthesize tertiarySource=_tertiarySource - In the implementation block
@property (nonatomic,retain) id result;                                 //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
-(void)setResult:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)setSource:(id)arg1 ;
-(id)result;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)source;
-(id)initWithSource:(id)arg1 secondarySource:(id)arg2 result:(id)arg3 batchSize:(unsigned long long)arg4 ;
-(id)secondarySource;
-(void)setSecondarySource:(id)arg1 ;
-(void)setTertiarySource:(id)arg1 ;
-(id)tertiarySource;
@end

