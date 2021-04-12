/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, NSMutableArray;

@interface TCDumpStruct : TCDumpType {

	long long mSize;
	NSString* mSizeFieldName;
	long long mSizeCorrection;
	NSMutableArray* mMembers;

}
-(id)initWithMembers:(id)arg1 ;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSize:(long long)arg1 sizeFieldName:(id)arg2 sizeCorrection:(int)arg3 members:(id)arg4 ;
-(id)initWithSize:(long long)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3 ;
@end

