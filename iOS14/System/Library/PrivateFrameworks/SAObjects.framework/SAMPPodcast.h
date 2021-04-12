/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPPodcast : SAMPMediaItem

@property (nonatomic,copy) NSString * seriesId; 
@property (nonatomic,copy) NSString * seriesTitle; 
+(id)podcast;
+(id)podcastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)seriesId;
-(void)setSeriesId:(NSString *)arg1 ;
-(NSString *)seriesTitle;
-(void)setSeriesTitle:(NSString *)arg1 ;
@end

