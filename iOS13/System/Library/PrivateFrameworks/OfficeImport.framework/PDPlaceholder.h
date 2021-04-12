/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)size;
-(unsigned)index;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end

