/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/

#import <libobjc.A.dylib/WspPropertyProtocol.h>

@class cdbProp, cbaseVariant;

@interface catalogNameProp : NSObject <WspPropertyProtocol> {

	cdbProp* _cProps;
	cbaseVariant* _variant;

}

@property (retain) cdbProp * cProps;                    //@synthesize cProps=_cProps - In the implementation block
@property (retain) cbaseVariant * variant;              //@synthesize variant=_variant - In the implementation block
-(cbaseVariant *)variant;
-(void)setVariant:(cbaseVariant *)arg1 ;
-(unsigned)propertyID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(cdbProp *)cProps;
-(id)initWithCatName:(id)arg1 UseExtBTypes:(BOOL)arg2 ;
-(void)setCProps:(cdbProp *)arg1 ;
@end

