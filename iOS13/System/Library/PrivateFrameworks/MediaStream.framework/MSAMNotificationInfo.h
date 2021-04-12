/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(MSAlertManager *)owner;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(CFUserNotificationRef)userNotification;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
@end

