/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSDate, NSString;

@interface PKSearchDateResult : NSObject <PKSearchAutocompleteToken> {

	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(BOOL)isEqual:(id)arg1 ;
@end

