/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@class OSALog, NSError, NSString, NSDictionary, NSDate;

@interface PCCJob : NSObject {

	OSALog* _package;
	NSError* _errObj;
	NSString* _type;
	NSString* _event;
	NSString* _jid;
	NSString* _target;
	NSDictionary* _options;
	NSDictionary* _metadata;
	NSDate* _lastTouch;

}

@property (readonly) NSString * jid;                       //@synthesize jid=_jid - In the implementation block
@property (readonly) NSString * target;                    //@synthesize target=_target - In the implementation block
@property (readonly) NSDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) NSString * nextFilepath; 
@property (readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) id result; 
@property (readonly) NSDate * lastTouch;                   //@synthesize lastTouch=_lastTouch - In the implementation block
@property (readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (readonly) NSString * event;                     //@synthesize event=_event - In the implementation block
-(id)description;
-(NSDictionary *)options;
-(NSString *)type;
-(NSString *)target;
-(id)result;
-(NSDictionary *)metadata;
-(NSString *)event;
-(NSDate *)lastTouch;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 ;
-(void)packageLog:(id)arg1 forRouting:(id)arg2 info:(id)arg3 options:(id)arg4 ;
-(NSString *)nextFilepath;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 forFile:(id)arg4 ;
-(void)registerResult:(BOOL)arg1 error:(id)arg2 ;
-(NSString *)jid;
@end

