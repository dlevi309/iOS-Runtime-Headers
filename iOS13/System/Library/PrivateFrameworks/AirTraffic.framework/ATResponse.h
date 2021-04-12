/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPartial;
-(void)setPartial:(BOOL)arg1 ;
-(id)additionalDescription;
@end

