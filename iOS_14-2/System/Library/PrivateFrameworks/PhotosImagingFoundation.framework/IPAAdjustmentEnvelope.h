/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(id)debugDescription;
-(NSString *)originator;
-(IPAAdjustmentStack *)adjustmentStack;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(id)videoAdjustmentStack;
-(id)photoAdjustmentStack;
-(BOOL)containsPhotoAdjustments;
-(BOOL)containsVideoAdjustments;
-(void)setAdjustmentStack:(IPAAdjustmentStack *)arg1 ;
@end

