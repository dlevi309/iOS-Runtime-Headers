/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <NewsAnalyticsUpload/NewsAnalyticsUpload-Structs.h>
#import <libobjc.A.dylib/NDAnalyticsEnvelopeStoreEntry.h>
@class NSString, NSDate;


@protocol NDAnalyticsEnvelopeStoreEntry <NSCopying>
@property (nonatomic,copy,readonly) NSString * envelopeIdentifier; 
@property (nonatomic,copy,readonly) NSDate * envelopeSubmissionDate; 
@property (nonatomic,readonly) int envelopeContentType; 
@required
-(int)envelopeContentType;
-(NSDate *)envelopeSubmissionDate;
-(NSString *)envelopeIdentifier;

@end


@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {

	unsigned long long _submissionDateMillisecondsSince1970;
	int _envelopeContentType;
	NSString* _envelopeIdentifier;

}

@property (nonatomic,copy) NSString * envelopeIdentifier;                //@synthesize envelopeIdentifier=_envelopeIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * envelopeSubmissionDate; 
@property (assign,nonatomic) int envelopeContentType;                    //@synthesize envelopeContentType=_envelopeContentType - In the implementation block
-(id)initWithStringRepresentation:(id)arg1 ;
-(int)envelopeContentType;
-(id)stringRepresentation;
-(id)init;
-(void)setEnvelopeIdentifier:(NSString *)arg1 ;
-(NSDate *)envelopeSubmissionDate;
-(id)description;
-(void)setEnvelopeSubmissionDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(void)setEnvelopeContentType:(int)arg1 ;
-(NSString *)envelopeIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

