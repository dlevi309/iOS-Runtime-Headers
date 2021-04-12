/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKStoreId : NSObject <NSSecureCoding> {

	 underlyingStoreId;

}

@property (readonly,nonatomic) NSNumber * numberValue; 
@property (readonly,nonatomic) NSString * stringValue; 
@property (readonly,nonatomic) long long longValue; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(NSNumber *)numberValue;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)longValue;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNumber:(id)arg1 ;
@end

