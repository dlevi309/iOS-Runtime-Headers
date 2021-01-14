/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpArray : TCDumpType {

	int mCount;
	int mCountFieldType;
	NSString* mCountFieldName;
	int mPaddingSize;
	TCDumpType* mElementType;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithCount:(int)arg1 countFieldType:(int)arg2 countFieldName:(id)arg3 elementType:(id)arg4 ;
-(id)initWithCount:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldName:(id)arg1 elementType:(id)arg2 ;
@end

