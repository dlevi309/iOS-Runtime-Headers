/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)propertyCount;
-(void)addProperty:(id)arg1 ;
-(NSMutableArray *)propArr;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)propsetID;
-(id)initWithPropSetID:(int)arg1 ;
-(id)propertyForPropID:(unsigned)arg1 ;
-(void)setPropsetID:(int)arg1 ;
-(void)setPropArr:(NSMutableArray *)arg1 ;
@end

