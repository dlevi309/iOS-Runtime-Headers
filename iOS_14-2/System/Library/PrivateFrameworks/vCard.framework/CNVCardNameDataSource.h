/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

@class NSString;


@protocol CNVCardNameDataSource <NSObject>
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@required
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
-(NSString *)middleName;
-(BOOL)isCompany;
-(NSString *)companyName;
-(NSString *)title;

@end

