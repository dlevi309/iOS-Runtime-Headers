/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {

	NSData* mSoundData;
	NSString* mName;
	int mSizeInBytes;

}
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setSizeInBytes:(int)arg1 ;
-(int)sizeInBytes;
-(id)soundData;
-(void)setSoundData:(id)arg1 ;
@end

