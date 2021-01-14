/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSArray, NSDictionary, NSNumber;

@interface DEResult : NSObject {

	NSString* _status;
	NSString* _error;
	NSArray* _response;
	NSDictionary* _meta;
	NSNumber* _elapsedTimeMs;
	NSNumber* _elapsedTimeThreadMs;
	NSString* _json;

}

@property (nonatomic,retain) NSString * status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSNumber * elapsedTimeMs;                    //@synthesize elapsedTimeMs=_elapsedTimeMs - In the implementation block
@property (nonatomic,retain) NSNumber * elapsedTimeThreadMs;              //@synthesize elapsedTimeThreadMs=_elapsedTimeThreadMs - In the implementation block
@property (nonatomic,retain) NSString * json;                             //@synthesize json=_json - In the implementation block
-(NSDictionary *)meta;
-(NSString *)json;
-(void)setElapsedTimeMs:(NSNumber *)arg1 ;
-(void)setElapsedTimeThreadMs:(NSNumber *)arg1 ;
-(NSNumber *)elapsedTimeMs;
-(NSNumber *)elapsedTimeThreadMs;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(void)setJson:(NSString *)arg1 ;
-(NSArray *)response;
-(void)setResponse:(NSArray *)arg1 ;
-(void)setMeta:(NSDictionary *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(id)initFromJson:(id)arg1 ;
-(NSString *)status;
@end

