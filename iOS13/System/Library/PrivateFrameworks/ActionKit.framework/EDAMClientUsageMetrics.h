/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

