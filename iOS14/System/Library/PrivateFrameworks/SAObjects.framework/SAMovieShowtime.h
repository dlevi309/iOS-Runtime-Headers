/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * buyTicketsPunchout; 
@property (nonatomic,copy) NSNumber * childTicketQuantity; 
@property (assign,nonatomic) BOOL is3d; 
@property (assign,nonatomic) BOOL isImax; 
@property (nonatomic,copy) NSNumber * regularTicketQuantity; 
@property (nonatomic,copy) NSNumber * seniorTicketQuantity; 
@property (nonatomic,retain) SACalendar * showtime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showtime;
+(id)showtimeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)is3d;
-(id)encodedClassName;
-(BOOL)isImax;
-(SACalendar *)showtime;
-(SAUIAppPunchOut *)buyTicketsPunchout;
-(void)setBuyTicketsPunchout:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)childTicketQuantity;
-(void)setChildTicketQuantity:(NSNumber *)arg1 ;
-(void)setIsImax:(BOOL)arg1 ;
-(NSNumber *)regularTicketQuantity;
-(void)setRegularTicketQuantity:(NSNumber *)arg1 ;
-(NSNumber *)seniorTicketQuantity;
-(void)setSeniorTicketQuantity:(NSNumber *)arg1 ;
-(void)setShowtime:(SACalendar *)arg1 ;
-(void)setIs3d:(BOOL)arg1 ;
@end

