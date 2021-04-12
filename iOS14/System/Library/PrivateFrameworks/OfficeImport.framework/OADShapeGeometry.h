/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

