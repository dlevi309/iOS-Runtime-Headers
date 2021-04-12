/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString;

@interface _TIPreferenceDomain : NSObject {

	BOOL _needsGetSync;
	BOOL _needsSetSync;
	NSString* _domain;
	NSString* _notification;
	double _lastSynchronizedTime;

}

@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * notification;                  //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL needsGetSync;                        //@synthesize needsGetSync=_needsGetSync - In the implementation block
@property (assign,nonatomic) BOOL needsSetSync;                        //@synthesize needsSetSync=_needsSetSync - In the implementation block
@property (assign,nonatomic) double lastSynchronizedTime;              //@synthesize lastSynchronizedTime=_lastSynchronizedTime - In the implementation block
+(id)domainWithName:(id)arg1 notification:(id)arg2 ;
-(void)setLastSynchronizedTime:(double)arg1 ;
-(BOOL)needsGetSync;
-(void)setNeedsSetSync:(BOOL)arg1 ;
-(void)setNotification:(NSString *)arg1 ;
-(NSString *)notification;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)needsSetSync;
-(NSString *)domain;
-(void)setNeedsGetSync:(BOOL)arg1 ;
-(double)lastSynchronizedTime;
@end

