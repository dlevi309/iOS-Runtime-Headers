/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface PDPlaceholder : NSObject {

	int mType;
	int mOrientation;
	int mSize;
	unsigned mIndex;
	int mBoundsTrack;

}
+(BOOL)isTextType:(int)arg1 ;
+(BOOL)isNonTextType:(int)arg1 ;
-(unsigned)index;
-(id)init;
-(int)size;
-(void)setIndex:(unsigned)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end

