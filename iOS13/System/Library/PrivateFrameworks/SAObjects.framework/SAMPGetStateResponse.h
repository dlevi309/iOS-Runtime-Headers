/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(int)state;
-(id)groupIdentifier;
-(void)setState:(int)arg1 ;
-(id)encodedClassName;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(SAMPMediaItem *)listeningToItem;
-(BOOL)requiresResponse;
-(NSString *)hashedGroupID;
-(void)setHashedGroupID:(NSString *)arg1 ;
-(NSNumber *)listeningToMusicApplication;
-(void)setListeningToMusicApplication:(NSNumber *)arg1 ;
@end

