/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSError;

@interface PKUniqueAddressField : NSObject {

	BOOL _formatIsInvalid;
	NSString* _key;
	long long _index;
	NSError* _error;
	NSString* _invalidText;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * invalidText;              //@synthesize invalidText=_invalidText - In the implementation block
@property (assign,nonatomic) BOOL formatIsInvalid;                //@synthesize formatIsInvalid=_formatIsInvalid - In the implementation block
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)key;
-(NSString *)invalidText;
-(void)setInvalidText:(NSString *)arg1 ;
-(BOOL)formatIsInvalid;
-(void)setFormatIsInvalid:(BOOL)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

