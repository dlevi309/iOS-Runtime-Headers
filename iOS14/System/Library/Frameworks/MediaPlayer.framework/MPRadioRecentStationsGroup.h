/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding> {

	NSString* _localizedTitle;
	NSArray* _stations;

}

@property (nonatomic,copy) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSArray * stations;                     //@synthesize stations=_stations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)stations;
-(id)initWithCoder:(id)arg1 ;
-(void)setStations:(NSArray *)arg1 ;
@end

