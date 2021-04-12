/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(BOOL)vibrate;
-(void)setVibrate:(BOOL)arg1 ;
-(int)soundDuration;
-(void)setSoundDuration:(int)arg1 ;
@end

