/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpContainer : TCDumpType {

	int mByteSize;
	int mByteSizeFieldType;
	NSString* mByteSizeFieldName;
	int mByteSizeCorrection;
	TCDumpType* mElementType;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithByteSize:(int)arg1 byteSizeFieldType:(int)arg2 byteSizeFieldName:(id)arg3 byteSizeCorrection:(int)arg4 elementType:(id)arg5 ;
-(id)initWithByteSize:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
-(id)initWithByteSizeFieldName:(id)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldName:(id)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
@end

