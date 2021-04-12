/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {

	NSData* mSoundData;
	NSString* mName;
	int mSizeInBytes;

}
-(id)name;
-(id)description;
-(int)sizeInBytes;
-(void)setName:(id)arg1 ;
-(void)setSizeInBytes:(int)arg1 ;
-(BOOL)isLoaded;
-(id)soundData;
-(void)setSoundData:(id)arg1 ;
@end

