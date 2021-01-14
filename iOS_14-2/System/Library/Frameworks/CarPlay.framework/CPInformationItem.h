/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)detail;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 detail:(id)arg2 ;
@end

