/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPIDSMessage.h>

@class NSString, NSDate;

@interface HDSPEventRecordMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage> {

	double _timeout;
	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * dateDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
-(id)succinctDescription;
-(NSString *)dateDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeout;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDate:(id)arg1 timeout:(double)arg2 ;
@end

