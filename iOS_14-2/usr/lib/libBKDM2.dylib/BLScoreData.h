/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
@class NSNumber;

@interface BLScoreData : NSObject {

	BOOL _isIr;
	unsigned short _sequenceNumber;
	NSNumber* _frameNumber;
	SCD_Struct_BL21* _featureVector;

}

@property (readonly) NSNumber * frameNumber;                      //@synthesize frameNumber=_frameNumber - In the implementation block
@property (readonly) BOOL isIr;                                   //@synthesize isIr=_isIr - In the implementation block
@property (readonly) SCD_Struct_BL21* featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (assign) unsigned short sequenceNumber;                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(void)setSequenceNumber:(unsigned short)arg1 ;
-(NSNumber *)frameNumber;
-(BOOL)isIr;
-(unsigned short)sequenceNumber;
-(void)dealloc;
-(SCD_Struct_BL21*)featureVector;
-(id)initFromDebugData:(id)arg1 ;
-(float)scoreVersus:(id)arg1 ;
-(sEispLibDbgInfoFwCommon*)readFwCommon:(const sEispLibDbgInfoShared*)arg1 ;
-(unsigned)structureOffset:(const sEispLibDbgInfoShared*)arg1 withId:(int)arg2 ;
-(char*)readStructure:(const sEispLibDbgInfoShared*)arg1 withId:(int)arg2 ;
@end

