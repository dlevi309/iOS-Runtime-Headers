/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SALocalSearchBusiness2, NSString;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * movieShowtimes; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SALocalSearchBusiness2 *)theater;
-(NSArray *)movieShowtimes;
-(void)setMovieShowtimes:(NSArray *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
@end

