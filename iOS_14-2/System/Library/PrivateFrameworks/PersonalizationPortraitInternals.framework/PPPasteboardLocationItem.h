/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, NSDate, NSDictionary;

@interface PPPasteboardLocationItem : NSObject {

	NSString* _text;
	NSString* _bundleIdentifier;
	NSDate* _createdAt;
	NSDictionary* _addressComponents;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                            //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSDictionary * addressComponents;              //@synthesize addressComponents=_addressComponents - In the implementation block
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
-(NSString *)bundleIdentifier;
-(void)setText:(NSString *)arg1 ;
-(NSDictionary *)addressComponents;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)text;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
@end

