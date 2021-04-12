/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSArray;

@interface EARTokenPronounciations : NSObject {

	NSString* _token;
	NSArray* _pronunciations;

}

@property (nonatomic,copy) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSArray * pronunciations;              //@synthesize pronunciations=_pronunciations - In the implementation block
-(NSArray *)pronunciations;
-(void)setPronunciations:(NSArray *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 pronunciations:(id)arg2 ;
-(TokenProns*)_quasarProns;
@end

