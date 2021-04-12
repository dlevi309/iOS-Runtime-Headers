/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSString, NSDate;

@interface PXFeedbackEntry : NSObject <NSSecureCoding> {

	NSDictionary* _feedbackItemDetails;
	BOOL _alreadyCollected;
	NSMutableDictionary* _feedbackItemsDict;
	long long _generalFeedback;
	NSString* _systemID;
	NSDate* _timestamp;
	NSString* _appVersion;

}

@property (nonatomic,retain) NSMutableDictionary * feedbackItemsDict;              //@synthesize feedbackItemsDict=_feedbackItemsDict - In the implementation block
@property (assign,nonatomic) long long generalFeedback;                            //@synthesize generalFeedback=_generalFeedback - In the implementation block
@property (nonatomic,copy) NSString * systemID;                                    //@synthesize systemID=_systemID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                                  //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) BOOL alreadyCollected;                                //@synthesize alreadyCollected=_alreadyCollected - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positiveFeedbackForMemoryDetailsKeys;
+(id)negativeFeedbackForMemoryDetailsKeys;
+(id)positiveFeedbackForMemoriesKeys;
+(id)negativeFeedbackForMemoriesKeys;
+(id)positiveFeedbackForAutoLoopKeys;
+(id)negativeFeedbackForAutoLoopKeys;
+(id)positiveFeedbackForImageQualityKeys;
+(id)negativeFeedbackForImageQualityKeys;
+(id)createFakeTestEntry;
+(id)createFakeTestFeedbackDictionary;
-(void)setAppVersion:(NSString *)arg1 ;
-(id)uniqueID;
-(NSString *)appVersion;
-(id)init;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSystemID:(NSString *)arg1 ;
-(id)longDescription;
-(id)initWithSystemID:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)userLikedResults;
-(id)osKeyForItemKey:(id)arg1 ;
-(id)asTextForItemKey:(id)arg1 ;
-(NSMutableDictionary *)feedbackItemsDict;
-(void)setFeedbackItemsDict:(NSMutableDictionary *)arg1 ;
-(long long)generalFeedback;
-(void)setGeneralFeedback:(long long)arg1 ;
-(BOOL)alreadyCollected;
-(void)setAlreadyCollected:(BOOL)arg1 ;
-(NSString *)systemID;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

