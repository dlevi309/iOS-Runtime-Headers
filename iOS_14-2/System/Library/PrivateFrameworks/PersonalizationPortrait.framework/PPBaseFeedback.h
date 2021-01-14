/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface PPBaseFeedback : NSObject <NSSecureCoding, NSCopying> {

	NSString* _clientIdentifier;
	NSArray* _feedbackItems;
	NSString* _clientBundleId;
	NSString* _mappingId;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * feedbackItems;                //@synthesize feedbackItems=_feedbackItems - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleId;              //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (nonatomic,readonly) NSString * mappingId;                   //@synthesize mappingId=_mappingId - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) BOOL isMapped; 
+(BOOL)supportsSecureCoding;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)mappingId;
-(BOOL)isMapped;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientBundleId;
-(id)initWithFeedbackItems:(id)arg1 mappingId:(id)arg2 ;
-(NSArray *)feedbackItems;
-(id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(BOOL)isEqualToPPBaseFeedback:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

