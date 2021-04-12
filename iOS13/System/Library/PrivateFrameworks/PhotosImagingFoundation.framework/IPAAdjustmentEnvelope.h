/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying> {

	IPAAdjustmentStack* _adjustmentStack;
	NSString* _originator;
	NSString* _format;
	NSString* _formatVersion;

}

@property (nonatomic,retain) IPAAdjustmentStack * adjustmentStack;              //@synthesize adjustmentStack=_adjustmentStack - In the implementation block
@property (nonatomic,retain) NSString * originator;                             //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                          //@synthesize formatVersion=_formatVersion - In the implementation block
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(void)setFormatVersion:(NSString *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(IPAAdjustmentStack *)adjustmentStack;
-(id)videoAdjustmentStack;
-(id)photoAdjustmentStack;
-(BOOL)containsPhotoAdjustments;
-(BOOL)containsVideoAdjustments;
-(void)setAdjustmentStack:(IPAAdjustmentStack *)arg1 ;
@end

