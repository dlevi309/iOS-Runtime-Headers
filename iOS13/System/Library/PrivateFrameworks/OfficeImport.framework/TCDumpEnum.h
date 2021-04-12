/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {

	NSString* mTypeName;
	NSMutableDictionary* mValueToNameMap;
	NSMutableDictionary* mNameToValueMap;

}
-(id)typeName;
-(id)valueForName:(id)arg1 ;
-(id)nameForValue:(int)arg1 ;
-(id)initWithTypeName:(id)arg1 pairs:(TCDumpEnumPair*)arg2 ;
@end

