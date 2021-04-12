/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding> {

	 identifier;
	 _frequency;
	 _lastDuration;
	 _totalDuration;
	 _metadata;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSDate * firstSeen; 
@property (readonly,nonatomic) NSDate * lastSeen; 
@property (readonly,nonatomic) long long frequency; 
@property (readonly,nonatomic) double lastDuration; 
@property (readonly,nonatomic) double totalDuration; 
@property (readonly,nonatomic) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
-(double)totalDuration;
-(long long)frequency;
-(double)lastDuration;
-(NSDate *)lastSeen;
-(id)init;
-(NSDate *)firstSeen;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initFrom:(id)arg1 withIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)metadata;
-(id)copyWithZone:(void*)arg1 ;
-(id)init:(id)arg1 ;
@end

