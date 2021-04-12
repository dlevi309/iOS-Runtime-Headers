/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


#import <MediaStream/MediaStream-Structs.h>
@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

	MSAlertManager* _owner;
	NSString* _personID;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _runLoopSource;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) MSAlertManager * owner;                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * personID;                                 //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource; 
@property (assign,nonatomic) CFUserNotificationRef userNotification; 
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)info;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(MSAlertManager *)owner;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSString *)personID;
-(CFUserNotificationRef)userNotification;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(void)dealloc;
@end

