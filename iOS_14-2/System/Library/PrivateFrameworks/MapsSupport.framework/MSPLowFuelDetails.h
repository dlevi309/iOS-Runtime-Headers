/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface MSPLowFuelDetails : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSNumber* _engineType;
	NSData* _iconData;
	NSData* _iconDataCarPlay;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSNumber * engineType;                   //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,retain) NSData * iconData;                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSData * iconDataCarPlay;              //@synthesize iconDataCarPlay=_iconDataCarPlay - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)iconData;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)engineType;
-(void)setEngineType:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3 ;
-(NSData *)iconDataCarPlay;
-(void)setIconDataCarPlay:(NSData *)arg1 ;
@end

