/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSString;

@interface INIntentSummary : NSObject {

	NSString* _intentIdentifier;
	NSString* _originatingBundleId;
	NSString* _languageCode;
	unsigned long long _containedProperties;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * intentIdentifier;                    //@synthesize intentIdentifier=_intentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingBundleId;                 //@synthesize originatingBundleId=_originatingBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) unsigned long long containedProperties;              //@synthesize containedProperties=_containedProperties - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(unsigned long long)containedProperties;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)languageCode;
-(NSString *)originatingBundleId;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)intentIdentifier;
-(id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3 ;
-(NSString *)title;
@end

