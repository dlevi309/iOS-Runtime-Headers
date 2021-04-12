/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAMPMediaItem, NSNumber;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * hashedGroupID; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,copy) NSNumber * listeningToMusicApplication; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(SAMPMediaItem *)listeningToItem;
-(void)setSource:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(NSString *)hashedGroupID;
-(void)setHashedGroupID:(NSString *)arg1 ;
-(NSNumber *)listeningToMusicApplication;
-(void)setListeningToMusicApplication:(NSNumber *)arg1 ;
-(NSString *)source;
@end

