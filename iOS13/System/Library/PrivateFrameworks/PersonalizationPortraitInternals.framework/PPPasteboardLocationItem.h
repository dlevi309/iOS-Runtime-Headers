/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleIdentifier;
-(NSDictionary *)addressComponents;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
@end

