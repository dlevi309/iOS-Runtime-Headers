/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double verticalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (nonatomic,copy) NSNumber * age; 
@property (assign,nonatomic) double altitude; 
@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,copy) NSNumber * preciseLocationEnabled; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setRequestOrigin;
+(id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(double)direction;
-(NSNumber *)preciseLocationEnabled;
-(double)latitude;
-(void)setSpeed:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(id)groupIdentifier;
-(double)altitude;
-(void)setDirection:(double)arg1 ;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(id)encodedClassName;
-(double)speed;
-(double)verticalAccuracy;
-(BOOL)requiresResponse;
-(NSString *)desiredAccuracy;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setPreciseLocationEnabled:(NSNumber *)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setAge:(NSNumber *)arg1 ;
-(double)horizontalAccuracy;
-(void)setStatus:(NSString *)arg1 ;
-(NSNumber *)age;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(NSString *)status;
@end

