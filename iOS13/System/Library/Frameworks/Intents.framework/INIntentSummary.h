/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)languageCode;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3 ;
-(NSString *)intentIdentifier;
-(NSString *)originatingBundleId;
-(unsigned long long)containedProperties;
@end

