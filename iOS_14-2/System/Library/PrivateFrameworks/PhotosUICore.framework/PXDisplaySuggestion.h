/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, NSDictionary, NSDate;


@protocol PXDisplaySuggestion <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSDictionary * actionProperties; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(unsigned short)subtype;
-(NSString *)localIdentifier;
-(NSString *)localizedTitle;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)fetchKeyAssets;
-(NSString *)localizedSubtitle;
-(NSDictionary *)actionProperties;
-(unsigned short)type;
-(unsigned short)state;
-(NSString *)title;

@end

