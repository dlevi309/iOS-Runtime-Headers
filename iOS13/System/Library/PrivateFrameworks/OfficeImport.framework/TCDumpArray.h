/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

