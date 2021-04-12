/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(NSString *)notification;
-(void)setDomain:(NSString *)arg1 ;
-(void)setNotification:(NSString *)arg1 ;
-(BOOL)needsGetSync;
-(void)setNeedsGetSync:(BOOL)arg1 ;
-(BOOL)needsSetSync;
-(void)setNeedsSetSync:(BOOL)arg1 ;
-(double)lastSynchronizedTime;
-(void)setLastSynchronizedTime:(double)arg1 ;
@end

