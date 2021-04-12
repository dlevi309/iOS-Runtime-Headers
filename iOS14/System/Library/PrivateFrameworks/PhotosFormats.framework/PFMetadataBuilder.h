/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <libobjc.A.dylib/PFMetadataBuilder.h>
@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;


@protocol PFMetadataBuilder <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSArray * peopleNames; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSTimeZone * creationTimeZone; 
@required
-(NSString *)caption;
-(void)setCaption:(id)arg1;
-(void)setKeywords:(id)arg1;
-(NSArray *)keywords;
-(CLLocation *)location;
-(void)setTitle:(id)arg1;
-(void)setPeopleNames:(id)arg1;
-(NSArray *)peopleNames;
-(void)setLocation:(id)arg1;
-(NSDate *)creationDate;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(id)arg1;
-(NSString *)title;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2;
-(NSTimeZone *)creationTimeZone;

@end


@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;

@interface PFMetadataBuilder : NSObject <PFMetadataBuilder> {

	NSDate* _creationDate;
	NSTimeZone* _creationTimeZone;
	NSString* _caption;
	NSString* _title;
	NSArray* _keywords;
	NSString* _accessibilityDescription;
	NSArray* _peopleNames;
	CLLocation* _location;

}

@property (nonatomic,retain) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * creationTimeZone;                  //@synthesize creationTimeZone=_creationTimeZone - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * caption;                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                            //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,copy) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setKeywords:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)keywords;
-(CLLocation *)location;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSArray *)peopleNames;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)title;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2 ;
-(NSTimeZone *)creationTimeZone;
-(id)combinedKeywordsAndPeople;
-(void)setCreationTimeZone:(NSTimeZone *)arg1 ;
@end

