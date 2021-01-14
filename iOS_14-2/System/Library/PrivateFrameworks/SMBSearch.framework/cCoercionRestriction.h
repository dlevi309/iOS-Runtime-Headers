/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@protocol RestrictionProtocol;
@class NSObject;

@interface cCoercionRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	int _cop;
	unsigned _fValue;
	NSObject*<RestrictionProtocol> _restrictionObj;

}

@property (assign) int cop;                                                    //@synthesize cop=_cop - In the implementation block
@property (assign) unsigned fValue;                                            //@synthesize fValue=_fValue - In the implementation block
@property (retain) NSObject*<RestrictionProtocol> restrictionObj;              //@synthesize restrictionObj=_restrictionObj - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(int)cop;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(unsigned)ulType;
-(unsigned)fValue;
-(void)setCop:(int)arg1 ;
-(void)setRestriction:(id)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithOp:(int)arg1 FValue:(unsigned)arg2 Weight:(unsigned)arg3 ;
-(void)setRestrictionObj:(NSObject*<RestrictionProtocol>)arg1 ;
-(NSObject*<RestrictionProtocol>)restrictionObj;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(void)setFValue:(unsigned)arg1 ;
@end

