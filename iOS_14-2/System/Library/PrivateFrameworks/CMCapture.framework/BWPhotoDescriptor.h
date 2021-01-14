/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone;

@interface BWPhotoDescriptor : NSObject <NSSecureCoding> {

	NSString* _photoIdentifier;
	unsigned _processingFlags;
	NSDate* _time;
	BOOL _timeHasBeenSet;
	NSTimeZone* _timeZone;
	BOOL _timeZoneHasBeenSet;
	SCD_Struct_BW8 _presentationTimeStamp;
	BOOL _presentationTimeStampHasBeenSet;

}

@property (nonatomic,readonly) NSString * photoIdentifier;                      //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned processingFlags;                        //@synthesize processingFlags=_processingFlags - In the implementation block
@property (nonatomic,retain) NSDate * time; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) SCD_Struct_BW8 presentationTimeStamp; 
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(void)setPresentationTimeStamp:(SCD_Struct_BW8)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(SCD_Struct_BW8)presentationTimeStamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)photoIdentifier;
-(id)description;
-(unsigned)processingFlags;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 time:(id)arg3 timeZone:(id)arg4 presentationTimeStamp:(SCD_Struct_BW8)arg5 ;
-(void)dealloc;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 ;
@end

