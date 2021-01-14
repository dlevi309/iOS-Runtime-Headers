/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject {

	NSNumber* _sessions;
	NSString* _subjectConsumerKey;
	NSString* _subjectConsumerSecret;

}

@property (nonatomic,retain) NSNumber * sessions;                           //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerKey;                 //@synthesize subjectConsumerKey=_subjectConsumerKey - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerSecret;              //@synthesize subjectConsumerSecret=_subjectConsumerSecret - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)sessions;
-(void)setSessions:(NSNumber *)arg1 ;
-(NSString *)subjectConsumerKey;
-(void)setSubjectConsumerKey:(NSString *)arg1 ;
-(NSString *)subjectConsumerSecret;
-(void)setSubjectConsumerSecret:(NSString *)arg1 ;
@end

