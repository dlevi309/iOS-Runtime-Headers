/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setRestriction:(id)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(void)setRestrictionObj:(NSObject*<RestrictionProtocol>)arg1 ;
-(NSObject*<RestrictionProtocol>)restrictionObj;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
@end

