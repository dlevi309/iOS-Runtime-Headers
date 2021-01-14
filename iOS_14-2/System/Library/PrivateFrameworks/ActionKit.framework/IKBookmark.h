/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHashString:(NSString *)arg1 ;
-(double)progress;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)descr;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(long long)bookmarkID;
-(void)setBookmarkID:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NSURL *)URL;
-(NSString *)hashString;
-(NSDate *)date;
-(NSString *)title;
-(void)dealloc;
-(id)initWithBookmarkID:(long long)arg1 ;
-(void)setDescr:(NSString *)arg1 ;
-(BOOL)isStarred;
-(void)setStarred:(BOOL)arg1 ;
-(NSString *)privateSource;
-(void)setPrivateSource:(NSString *)arg1 ;
-(NSDate *)progressDate;
-(void)setProgressDate:(NSDate *)arg1 ;
@end

