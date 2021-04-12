/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSData *)iconData;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3 ;
-(NSNumber *)engineType;
-(void)setEngineType:(NSNumber *)arg1 ;
-(NSData *)iconDataCarPlay;
-(void)setIconDataCarPlay:(NSData *)arg1 ;
@end

