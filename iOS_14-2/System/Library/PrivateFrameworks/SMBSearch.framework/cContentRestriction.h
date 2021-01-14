/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@class fullPropSpec, NSData, NSString;

@interface cContentRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	unsigned _charCount;
	unsigned _lcid;
	int _genMethod;
	fullPropSpec* _propSpec;
	NSData* _pwcsPhrase;
	NSString* _phraseStr;

}

@property (retain) fullPropSpec * propSpec;              //@synthesize propSpec=_propSpec - In the implementation block
@property (assign) unsigned charCount;                   //@synthesize charCount=_charCount - In the implementation block
@property (retain) NSData * pwcsPhrase;                  //@synthesize pwcsPhrase=_pwcsPhrase - In the implementation block
@property (retain) NSString * phraseStr;                 //@synthesize phraseStr=_phraseStr - In the implementation block
@property (assign) unsigned lcid;                        //@synthesize lcid=_lcid - In the implementation block
@property (assign) int genMethod;                        //@synthesize genMethod=_genMethod - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(unsigned)lcid;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(unsigned)ulType;
-(int)setPhrase:(id)arg1 ;
-(void)setCharCount:(unsigned)arg1 ;
-(unsigned)charCount;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(fullPropSpec *)propSpec;
-(void)setPropSpec:(fullPropSpec *)arg1 ;
-(id)initWithMethod:(int)arg1 Weight:(unsigned)arg2 ;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(void)setLcid:(unsigned)arg1 ;
-(void)setPhraseStr:(NSString *)arg1 ;
-(NSData *)pwcsPhrase;
-(void)setPwcsPhrase:(NSData *)arg1 ;
-(NSString *)phraseStr;
-(int)genMethod;
-(void)setGenMethod:(int)arg1 ;
@end

