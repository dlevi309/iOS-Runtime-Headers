/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CBSUIAlertAction : NSObject <NSSecureCoding> {

	NSString* _title;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id handler;                      //@synthesize handler=_handler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alertActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)handler;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end

