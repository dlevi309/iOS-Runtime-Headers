/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)frame;
-(void)setType:(int)arg1 ;
-(void)setData:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)data;
-(int)sizeInBytes;
-(int)type;
-(unsigned long long)hash;
-(id)initWithData:(id)arg1 type:(int)arg2 ;
-(void)setSizeInBytes:(int)arg1 ;
-(BOOL)isLoaded;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)sizeInPoints;
-(void)setSizeInPoints:(CGSize)arg1 ;
@end

