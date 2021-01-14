/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CPAlertAction : NSObject <NSSecureCoding> {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _handler;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) id handler;                       //@synthesize handler=_handler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)handler;
-(unsigned long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end

