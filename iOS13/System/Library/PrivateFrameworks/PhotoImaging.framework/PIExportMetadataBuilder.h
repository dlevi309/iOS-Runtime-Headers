/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <libobjc.A.dylib/PIExportMetadataBuilder.h>
@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;


@protocol PIExportMetadataBuilder <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * peopleNames; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSTimeZone * creationTimeZone; 
@required
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSArray *)keywords;
-(void)setKeywords:(id)arg1;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(void)setLocation:(id)arg1;
-(NSString *)caption;
-(void)setCaption:(id)arg1;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(id)arg1;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2;
-(NSTimeZone *)creationTimeZone;

@end


@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;

@interface PIExportMetadataBuilder : NSObject <PIExportMetadataBuilder> {

	NSDate* _creationDate;
	NSTimeZone* _creationTimeZone;
	NSString* _caption;
	NSString* _title;
	NSArray* _keywords;
	NSArray* _peopleNames;
	CLLocation* _location;

}

@property (nonatomic,retain) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * creationTimeZone;              //@synthesize creationTimeZone=_creationTimeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                           //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                        //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,copy) CLLocation * location;                        //@synthesize location=_location - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2 ;
-(NSTimeZone *)creationTimeZone;
-(id)combinedKeywordsAndPeople;
-(void)setCreationTimeZone:(NSTimeZone *)arg1 ;
@end

