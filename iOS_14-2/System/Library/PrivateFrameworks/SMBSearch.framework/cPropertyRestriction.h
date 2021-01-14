/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@class fullPropSpec, cbaseVariant;

@interface cPropertyRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	unsigned _relOp;
	unsigned _lcid;
	fullPropSpec* _propSpec;
	cbaseVariant* _prVal;

}

@property (assign) unsigned relOp;                       //@synthesize relOp=_relOp - In the implementation block
@property (retain) fullPropSpec * propSpec;              //@synthesize propSpec=_propSpec - In the implementation block
@property (retain) cbaseVariant * prVal;                 //@synthesize prVal=_prVal - In the implementation block
@property (assign) unsigned lcid;                        //@synthesize lcid=_lcid - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(unsigned)lcid;
-(void)setWeight:(unsigned)arg1 ;
-(cbaseVariant *)prVal;
-(unsigned)relOp;
-(unsigned)weight;
-(unsigned)ulType;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(fullPropSpec *)propSpec;
-(id)initWithRelop:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(void)setPropSpec:(fullPropSpec *)arg1 ;
-(void)setPrVal:(cbaseVariant *)arg1 ;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(void)setRelOp:(unsigned)arg1 ;
-(void)setLcid:(unsigned)arg1 ;
@end

