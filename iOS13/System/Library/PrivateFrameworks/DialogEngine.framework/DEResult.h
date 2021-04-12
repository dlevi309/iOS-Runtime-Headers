/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSArray, NSDictionary, NSNumber;

@interface DEResult : NSObject {

	NSString* _status;
	NSString* _error;
	NSArray* _response;
	NSDictionary* _meta;
	NSNumber* _elapsedTimeMs;
	NSString* _json;

}

@property (nonatomic,retain) NSString * status;                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;                   //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSNumber * elapsedTimeMs;              //@synthesize elapsedTimeMs=_elapsedTimeMs - In the implementation block
@property (nonatomic,retain) NSString * json;                       //@synthesize json=_json - In the implementation block
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(NSString *)status;
-(NSArray *)response;
-(void)setStatus:(NSString *)arg1 ;
-(void)setResponse:(NSArray *)arg1 ;
-(NSString *)json;
-(void)setJson:(NSString *)arg1 ;
-(NSDictionary *)meta;
-(void)setMeta:(NSDictionary *)arg1 ;
-(void)setElapsedTimeMs:(NSNumber *)arg1 ;
-(id)initFromJson:(id)arg1 ;
-(NSNumber *)elapsedTimeMs;
@end

