/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)actionURL;
-(NSString *)title;
@end

