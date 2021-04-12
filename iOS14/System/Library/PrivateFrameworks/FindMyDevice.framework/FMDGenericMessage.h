/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDGenericMessage : NSObject <NSSecureCoding> {

	BOOL _vibrate;
	int _soundDuration;
	NSString* _soundName;

}

@property (assign,nonatomic) BOOL vibrate;                      //@synthesize vibrate=_vibrate - In the implementation block
@property (nonatomic,retain) NSString * soundName;              //@synthesize soundName=_soundName - In the implementation block
@property (assign,nonatomic) int soundDuration;                 //@synthesize soundDuration=_soundDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)soundName;
-(void)setSoundName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)vibrate;
-(id)initWithCoder:(id)arg1 ;
-(void)setVibrate:(BOOL)arg1 ;
-(void)setSoundDuration:(int)arg1 ;
-(int)soundDuration;
@end

