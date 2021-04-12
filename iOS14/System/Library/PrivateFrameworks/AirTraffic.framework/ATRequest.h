/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/ATMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,copy) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)command;
-(id)additionalDescription;
-(id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3 ;
-(id)responseWithError:(id)arg1 parameters:(id)arg2 ;
-(id)partialResponseWithParameters:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)dataClass;
@end

