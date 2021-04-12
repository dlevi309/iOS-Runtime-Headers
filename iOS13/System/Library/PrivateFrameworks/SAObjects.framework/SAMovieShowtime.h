/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)encodedClassName;
-(BOOL)is3d;
-(void)setIs3d:(BOOL)arg1 ;
-(SACalendar *)showtime;
-(SAUIAppPunchOut *)buyTicketsPunchout;
-(void)setBuyTicketsPunchout:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)childTicketQuantity;
-(void)setChildTicketQuantity:(NSNumber *)arg1 ;
-(BOOL)isImax;
-(void)setIsImax:(BOOL)arg1 ;
-(NSNumber *)regularTicketQuantity;
-(void)setRegularTicketQuantity:(NSNumber *)arg1 ;
-(NSNumber *)seniorTicketQuantity;
-(void)setSeniorTicketQuantity:(NSNumber *)arg1 ;
-(void)setShowtime:(SACalendar *)arg1 ;
@end

