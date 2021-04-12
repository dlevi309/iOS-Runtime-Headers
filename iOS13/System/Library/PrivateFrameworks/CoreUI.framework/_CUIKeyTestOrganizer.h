/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[22];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned long long flexAttributesCount;
	renditionkeytoken testKey[22];
	unsigned long long chooseCount;
	unsigned long long subchooseCount;

}
-(void)dealloc;
-(unsigned long long)_attributeToBumpIndex;
-(BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
@end

