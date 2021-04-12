/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@class NSString, NSURL;

@interface FMFNoNetworkAlertInfo : NSObject {

	NSString* _title;
	NSString* _message;
	NSURL* _actionURL;

}

@property (nonatomic,retain) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSURL * actionURL;               //@synthesize actionURL=_actionURL - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSURL *)actionURL;
-(void)setActionURL:(NSURL *)arg1 ;
@end

