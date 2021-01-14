/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSDate, NSString;

@interface SAHomeCommunicationAnnouncement : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSDate * datePlaybackFinished; 
@property (nonatomic,copy) NSDate * datePlaybackStarted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)datePlaybackFinished;
-(void)setDatePlaybackFinished:(NSDate *)arg1 ;
-(NSDate *)datePlaybackStarted;
-(void)setDatePlaybackStarted:(NSDate *)arg1 ;
@end

