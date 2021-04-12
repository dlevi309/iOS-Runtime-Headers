/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class NSString, NSURL;

@interface GCNotificationOptions : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _categoryID;
	NSString* _threadID;
	NSURL* _defaultActionURL;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * categoryID;                 //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * threadID;                   //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSURL * defaultActionURL;              //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSURL *)defaultActionURL;
-(NSString *)body;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)threadID;
-(void)setCategoryID:(NSString *)arg1 ;
-(NSString *)categoryID;
-(void)setThreadID:(NSString *)arg1 ;
-(NSString *)title;
@end

