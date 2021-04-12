/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSString, NSSet;

@interface CUIKUserActivity : NSObject {

	unsigned long long _type;
	NSString* _activityTitle;
	NSString* _activitySubtitle;
	NSSet* _activityKeywords;
	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * activityTitle;                 //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) NSString * activitySubtitle;              //@synthesize activitySubtitle=_activitySubtitle - In the implementation block
@property (nonatomic,retain) NSSet * activityKeywords;                 //@synthesize activityKeywords=_activityKeywords - In the implementation block
+(unsigned long long)_typeFromDictionary:(id)arg1 ;
+(unsigned long long)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(BOOL)_boolFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(id)activityForDictionary:(id)arg1 ;
+(id)activityForActivity:(id)arg1 ;
+(long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setActivityKeywords:(NSSet *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)activitySubtitle;
-(id)dictionary;
-(void)setActivityTitle:(NSString *)arg1 ;
-(unsigned long long)type;
-(void)setActivitySubtitle:(NSString *)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSString *)activityTitle;
-(unsigned long long)version;
-(NSSet *)activityKeywords;
@end

