/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpNumeric, NSMutableDictionary;

@interface TCDumpUnion : TCDumpType {

	NSString* mSelectorFieldName;
	TCDumpNumeric* mSelectorField;
	NSMutableDictionary* mSelectorToMemberMap;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3 ;
-(id)initWithSelectorField:(id)arg1 members:(id)arg2 ;
@end

