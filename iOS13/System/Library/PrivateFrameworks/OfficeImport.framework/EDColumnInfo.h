/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, EDWorksheet, EDReference, NSString;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {

	EDResources* mResources;
	EDWorksheet* mWorksheet;
	int mWidth;
	BOOL mHidden;
	EDReference* mRange;
	unsigned long long mStyleIndex;
	unsigned char mOutlineLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)key;
-(id)range;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(BOOL)isHidden;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setRange:(id)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleIndex;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(int)widthInXlUnits;
-(void)setWidthInXlUnits:(int)arg1 ;
-(void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2 ;
-(unsigned char)outlineLevel;
-(void)setOutlineLevel:(unsigned char)arg1 ;
@end

