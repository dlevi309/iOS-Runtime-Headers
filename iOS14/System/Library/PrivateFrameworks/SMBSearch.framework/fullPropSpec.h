/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@interface fullPropSpec : NSObject {

	network_uuid propGuid;
	int _propNumber;
	unsigned _ulKind;
	unsigned _propID;

}

@property (assign) int propNumber;               //@synthesize propNumber=_propNumber - In the implementation block
@property (assign) unsigned ulKind;              //@synthesize ulKind=_ulKind - In the implementation block
@property (assign) unsigned propID;              //@synthesize propID=_propID - In the implementation block
-(unsigned)ulKind;
-(unsigned)propID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)propNumber;
-(void)setPropNumber:(int)arg1 ;
-(id)initWithPropertyNumber:(int)arg1 ;
-(void)setUlKind:(unsigned)arg1 ;
-(void)setPropID:(unsigned)arg1 ;
@end

