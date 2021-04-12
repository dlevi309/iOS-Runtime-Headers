/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class CNAvatarImageRenderer, NSCache;

@interface CKPrintController : NSObject {

	BOOL _isPrinting;
	CNAvatarImageRenderer* _avatarImageRenderer;
	NSCache* _avatarCache;

}

@property (nonatomic,retain) CNAvatarImageRenderer * avatarImageRenderer;              //@synthesize avatarImageRenderer=_avatarImageRenderer - In the implementation block
@property (nonatomic,retain) NSCache * avatarCache;                                    //@synthesize avatarCache=_avatarCache - In the implementation block
@property (assign,setter=setPrinting:,nonatomic) BOOL isPrinting;                      //@synthesize isPrinting=_isPrinting - In the implementation block
+(id)sharedInstance;
+(void)printResolvedColors:(id*)arg1 balloonDescriptor:(CKBalloonDescriptor_t*)arg2 coloredBalloonView:(id)arg3 ;
+(id)printBackgroundColor;
+(id)printTranscriptTextColor;
+(id)printBalloonTextColor;
+(id)printAttributes:(id)arg1 ;
-(id)init;
-(id)avatarImageForContact:(id)arg1 diameter:(double)arg2 ;
-(void)setAvatarCache:(NSCache *)arg1 ;
-(BOOL)isPrinting;
-(void)setAvatarImageRenderer:(CNAvatarImageRenderer *)arg1 ;
-(CNAvatarImageRenderer *)avatarImageRenderer;
-(void)clearAvatarCache;
-(NSCache *)avatarCache;
-(void)setPrinting:(BOOL)arg1 ;
@end

