/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKDateRange.h>
@class NSDate, NSString;


@protocol NPKDateRange <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) NSString * startDateString; 
@property (nonatomic,readonly) NSString * expiryDateString; 
@required
-(NSDate *)startDate;
-(NSDate *)expiryDate;
-(NSString *)expiryDateString;
-(NSString *)startDateString;

@end


@class NSDate, NSString;

@interface NPKDateRange : NSObject <NPKDateRange> {

	NSDate* _startDate;
	NSString* _startDateString;
	NSDate* _expiryDate;
	NSString* _expiryDateString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSString * startDateString;               //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,readonly) NSString * expiryDateString;              //@synthesize expiryDateString=_expiryDateString - In the implementation block
+(id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2 ;
-(NSDate *)startDate;
-(NSDate *)expiryDate;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(id)initWithExpireDate:(id)arg1 formatterStyle:(unsigned long long)arg2 ;
@end

