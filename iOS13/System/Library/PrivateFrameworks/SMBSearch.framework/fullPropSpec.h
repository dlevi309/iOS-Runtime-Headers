/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)propNumber;
-(void)setPropNumber:(int)arg1 ;
-(id)initWithPropertyNumber:(int)arg1 ;
-(unsigned)ulKind;
-(void)setUlKind:(unsigned)arg1 ;
-(unsigned)propID;
-(void)setPropID:(unsigned)arg1 ;
@end

