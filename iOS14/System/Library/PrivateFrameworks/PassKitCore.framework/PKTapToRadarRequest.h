/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKTapToRadarRequest : NSObject <NSSecureCoding> {

	NSString* _reason;
	NSString* _relatedRadar;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * relatedRadar;              //@synthesize relatedRadar=_relatedRadar - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)relatedRadar;
-(void)setRelatedRadar:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

