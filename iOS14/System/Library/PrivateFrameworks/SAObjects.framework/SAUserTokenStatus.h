/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSNumber, NSString;

@interface SAUserTokenStatus : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSNumber * lastUpdateAttemptTime; 
@property (nonatomic,copy) NSNumber * shouldExcludeFromBackgroundRefresh; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)errorCode;
-(NSNumber *)lastUpdateAttemptTime;
-(void)setLastUpdateAttemptTime:(NSNumber *)arg1 ;
-(NSNumber *)shouldExcludeFromBackgroundRefresh;
-(void)setShouldExcludeFromBackgroundRefresh:(NSNumber *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end

