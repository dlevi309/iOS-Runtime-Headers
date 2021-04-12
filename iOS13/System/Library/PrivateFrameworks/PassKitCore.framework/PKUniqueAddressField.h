/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSError;

@interface PKUniqueAddressField : NSObject {

	NSString* _key;
	long long _index;
	NSError* _error;
	NSString* _invalidText;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * invalidText;              //@synthesize invalidText=_invalidText - In the implementation block
-(NSString *)key;
-(NSError *)error;
-(long long)index;
-(void)setError:(NSError *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(NSString *)invalidText;
-(void)setInvalidText:(NSString *)arg1 ;
@end

