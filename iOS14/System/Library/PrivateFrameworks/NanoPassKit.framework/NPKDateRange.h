/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(NSDate *)startDate;
-(NSDate *)expiryDate;

@end


@class NSDate, NSString;

@interface NPKDateRange : NSObject <NPKDateRange> {

	NSDate* _startDate;
	NSString* _startDateString;
	NSDate* _expiryDate;
	NSString* _expiryDateString;

}

@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSString * startDateString;               //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,readonly) NSString * expiryDateString;              //@synthesize expiryDateString=_expiryDateString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2 ;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(NSDate *)startDate;
-(NSDate *)expiryDate;
-(id)initWithStartDate:(id)arg1 expirationDate:(id)arg2 formatterStyle:(unsigned long long)arg3 ;
@end

