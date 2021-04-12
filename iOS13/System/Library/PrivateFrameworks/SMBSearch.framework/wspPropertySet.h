/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class NSMutableArray;

@interface wspPropertySet : NSObject {

	network_uuid propSetGuid;
	int _propsetID;
	NSMutableArray* _propArr;

}

@property (assign) int propsetID;                         //@synthesize propsetID=_propsetID - In the implementation block
@property (retain) NSMutableArray * propArr;              //@synthesize propArr=_propArr - In the implementation block
-(void)addProperty:(id)arg1 ;
-(unsigned long long)propertyCount;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(NSMutableArray *)propArr;
-(int)propsetID;
-(id)initWithPropSetID:(int)arg1 ;
-(id)propertyForPropID:(unsigned)arg1 ;
-(void)setPropsetID:(int)arg1 ;
-(void)setPropArr:(NSMutableArray *)arg1 ;
@end

