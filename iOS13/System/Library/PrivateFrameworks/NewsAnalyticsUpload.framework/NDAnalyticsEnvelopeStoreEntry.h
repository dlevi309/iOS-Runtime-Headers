/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 ;
-(int)envelopeContentType;
-(NSDate *)envelopeSubmissionDate;
-(void)setEnvelopeIdentifier:(NSString *)arg1 ;
-(void)setEnvelopeContentType:(int)arg1 ;
-(void)setEnvelopeSubmissionDate:(NSDate *)arg1 ;
-(NSString *)envelopeIdentifier;
@end

