/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface MNTimepoint : NSObject <MNJSONOutput, NSSecureCoding, NSCopying> {

	long long _type;
	NSDate* _date;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)leaveNow;
+(id)leaveBy:(id)arg1 ;
+(id)arriveBy:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 date:(id)arg2 ;
@end

