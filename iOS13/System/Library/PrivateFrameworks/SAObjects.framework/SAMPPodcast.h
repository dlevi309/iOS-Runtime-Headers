/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

