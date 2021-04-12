/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURL, NSString, NSDate;

@interface IKBookmark : NSObject {

	long long _bookmarkID;
	NSURL* _URL;
	NSString* _title;
	NSString* _descr;
	NSDate* _date;
	BOOL _starred;
	NSString* _privateSource;
	NSString* _hashString;
	double _progress;
	NSDate* _progressDate;

}

@property (assign,nonatomic) long long bookmarkID;                       //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descr;                             //@synthesize descr=_descr - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,getter=isStarred,nonatomic) BOOL starred;              //@synthesize starred=_starred - In the implementation block
@property (nonatomic,copy) NSString * privateSource;                     //@synthesize privateSource=_privateSource - In the implementation block
@property (nonatomic,copy) NSString * hashString;                        //@synthesize hashString=_hashString - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSDate * progressDate;                      //@synthesize progressDate=_progressDate - In the implementation block
+(id)bookmarkWithBookmarkID:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(double)progress;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NSString *)hashString;
-(void)setHashString:(NSString *)arg1 ;
-(long long)bookmarkID;
-(void)setBookmarkID:(long long)arg1 ;
-(id)initWithBookmarkID:(long long)arg1 ;
-(NSString *)descr;
-(void)setDescr:(NSString *)arg1 ;
-(BOOL)isStarred;
-(void)setStarred:(BOOL)arg1 ;
-(NSString *)privateSource;
-(void)setPrivateSource:(NSString *)arg1 ;
-(NSDate *)progressDate;
-(void)setProgressDate:(NSDate *)arg1 ;
@end

