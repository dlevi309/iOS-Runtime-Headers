/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

@interface OADSubBlip : OCDDelayedMedia {

	int mType;
	NSData* mData;
	CGSize mSizeInPoints;
	int mSizeInBytes;
	CGRect mFrame;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)data;
-(BOOL)isLoaded;
-(void)setData:(id)arg1 ;
-(CGRect)frame;
-(void)setSizeInBytes:(int)arg1 ;
-(int)sizeInBytes;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithData:(id)arg1 type:(int)arg2 ;
-(CGSize)sizeInPoints;
-(void)setSizeInPoints:(CGSize)arg1 ;
@end

