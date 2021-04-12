/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)title;
-(unsigned long long)style;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end

