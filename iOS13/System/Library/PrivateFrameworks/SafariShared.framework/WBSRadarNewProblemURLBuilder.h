/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSArray, NSURL;

@interface WBSRadarNewProblemURLBuilder : NSObject {

	NSString* _componentName;
	NSString* _componentVersion;
	NSString* _title;
	NSString* _descriptionText;
	NSArray* _attachmentURLs;
	long long _classification;

}

@property (nonatomic,copy) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,copy) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSArray * attachmentURLs;                 //@synthesize attachmentURLs=_attachmentURLs - In the implementation block
@property (assign,nonatomic) long long classification;               //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)componentName;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(long long)classification;
-(NSString *)componentVersion;
-(NSArray *)attachmentURLs;
-(void)setClassification:(long long)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(void)setAttachmentURLs:(NSArray *)arg1 ;
@end

