/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString, NSURL;


@protocol NTSectionDisplayDescriptor <NSCopying>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColorLight; 
@property (nonatomic,copy,readonly) NSString * nameColorDark; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * nameActionURL; 
@property (nonatomic,copy,readonly) NSString * backgroundColorLight; 
@property (nonatomic,copy,readonly) NSString * backgroundColorDark; 
@required
-(NSString *)actionTitle;
-(NSString *)name;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)nameColorLight;
-(NSString *)nameColorDark;
-(NSURL *)actionURL;
-(NSURL *)nameActionURL;

@end

