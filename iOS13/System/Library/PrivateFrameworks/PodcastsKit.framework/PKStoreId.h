/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)longValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(NSNumber *)numberValue;
-(id)initWithNumber:(id)arg1 ;
@end

