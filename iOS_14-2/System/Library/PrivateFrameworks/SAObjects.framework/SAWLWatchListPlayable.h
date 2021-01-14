/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWLWatchListChannelDetails, NSURL, NSString;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWLWatchListChannelDetails * channelDetails; 
@property (assign,nonatomic) BOOL entitled; 
@property (assign,nonatomic) BOOL installed; 
@property (nonatomic,copy) NSURL * playURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListPlayable;
+(id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)entitled;
-(BOOL)installed;
-(NSURL *)playURL;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setEntitled:(BOOL)arg1 ;
-(SAWLWatchListChannelDetails *)channelDetails;
-(void)setChannelDetails:(SAWLWatchListChannelDetails *)arg1 ;
-(void)setPlayURL:(NSURL *)arg1 ;
@end

