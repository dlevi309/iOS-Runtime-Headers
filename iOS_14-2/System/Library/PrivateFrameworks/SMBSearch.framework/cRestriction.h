/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@protocol RestrictionProtocol;
@class NSObject;

@interface cRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	NSObject*<RestrictionProtocol> _restrictionObj;

}

@property (retain) NSObject*<RestrictionProtocol> restrictionObj;              //@synthesize restrictionObj=_restrictionObj - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(unsigned)ulType;
-(void)setRestriction:(id)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(void)setRestrictionObj:(NSObject*<RestrictionProtocol>)arg1 ;
-(NSObject*<RestrictionProtocol>)restrictionObj;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
@end

