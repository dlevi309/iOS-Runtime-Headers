/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/ATMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding> {

	BOOL _partial;
	NSError* _error;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;              //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPartial:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPartial;
-(id)additionalDescription;
@end

