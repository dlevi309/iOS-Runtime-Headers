/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {

	BOOL mIsEscher;
	NSMutableDictionary* mAdjustValues;

}
-(id)init;
-(id)description;
-(int)type;
-(id)adjustValues;
-(id)equivalentCustomGeometry;
-(BOOL)isEscher;
-(int)adjustValueAtIndex:(unsigned)arg1 ;
-(void)setIsEscher:(BOOL)arg1 ;
-(unsigned long long)adjustValueCount;
-(BOOL)hasAdjustValueAtIndex:(unsigned)arg1 ;
-(void)setAdjustValue:(int)arg1 atIndex:(unsigned)arg2 ;
@end

