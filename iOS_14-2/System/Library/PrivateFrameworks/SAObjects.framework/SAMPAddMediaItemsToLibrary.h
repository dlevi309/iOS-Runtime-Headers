/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * influencedUserSharedUserId; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
+(id)addMediaItemsToLibrary;
+(id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)influencedUserSharedUserId;
-(void)setInfluencedUserSharedUserId:(NSString *)arg1 ;
-(SAMPCollection *)mediaItems;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
@end

