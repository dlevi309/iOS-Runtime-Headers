/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@interface reuseWhereRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	unsigned _resuseWhereID;

}

@property (assign) unsigned resuseWhereID;              //@synthesize resuseWhereID=_resuseWhereID - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithReuseWhereID:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(unsigned)resuseWhereID;
-(void)setResuseWhereID:(unsigned)arg1 ;
@end

