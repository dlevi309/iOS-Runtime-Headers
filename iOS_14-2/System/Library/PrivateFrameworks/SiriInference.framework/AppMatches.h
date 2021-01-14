/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInference.framework/SiriInference
*/

#import <SiriInference/SiriInference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AppMatches : NSObject <NSCopying, NSSecureCoding> {

	 recommendation;
	 bundleIds;
	 signals;

}

@property (readonly,nonatomic) long long recommendation; 
@property (readonly,nonatomic) NSArray * bundleIds; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)recommendation;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIds;
-(id)copyWithZone:(void*)arg1 ;
@end

