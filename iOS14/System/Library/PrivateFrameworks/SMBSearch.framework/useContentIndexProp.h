/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/WspPropertyProtocol.h>

@class cdbProp, cbaseVariant;

@interface useContentIndexProp : NSObject <WspPropertyProtocol> {

	cdbProp* _cProps;
	cbaseVariant* _variant;

}

@property (retain) cdbProp * cProps;                    //@synthesize cProps=_cProps - In the implementation block
@property (retain) cbaseVariant * variant;              //@synthesize variant=_variant - In the implementation block
-(cbaseVariant *)variant;
-(void)setVariant:(cbaseVariant *)arg1 ;
-(cdbProp *)cProps;
-(id)initWithBool:(BOOL)arg1 ;
-(unsigned)propertyID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setCProps:(cdbProp *)arg1 ;
@end

