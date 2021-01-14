/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@class NSString;

@interface _DASWidgetInfo : NSObject {

	BOOL _inStack;
	NSString* _widgetID;
	long long _pageID;
	NSString* _extensionBundleID;
	double _timeUntilContentExpiration;

}

@property (nonatomic,retain) NSString * widgetID;                            //@synthesize widgetID=_widgetID - In the implementation block
@property (assign,nonatomic) BOOL inStack;                                   //@synthesize inStack=_inStack - In the implementation block
@property (assign,nonatomic) long long pageID;                               //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleID;                   //@synthesize extensionBundleID=_extensionBundleID - In the implementation block
@property (assign,nonatomic) double timeUntilContentExpiration;              //@synthesize timeUntilContentExpiration=_timeUntilContentExpiration - In the implementation block
-(void)setExtensionBundleID:(NSString *)arg1 ;
-(long long)pageID;
-(NSString *)widgetID;
-(void)setWidgetID:(NSString *)arg1 ;
-(void)setInStack:(BOOL)arg1 ;
-(double)timeUntilContentExpiration;
-(void)setTimeUntilContentExpiration:(double)arg1 ;
-(void)setPageID:(long long)arg1 ;
-(BOOL)inStack;
-(NSString *)extensionBundleID;
@end

