/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding> {

	BOOL _tentative;
	NSString* _uuid;
	NSDate* _date;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) id asPlist; 
@property (nonatomic,copy,readonly) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL tentative;                        //@synthesize tentative=_tentative - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSDate *)date;
-(NSString *)uuid;
-(void)setTentative:(BOOL)arg1 ;
-(BOOL)tentative;
-(id)initWithPlist:(id)arg1 ;
-(id)initWithDate:(id)arg1 reason:(id)arg2 ;
-(id)asPlist;
-(id)reasonDescriptionWithNow:(id)arg1 ;
@end

