/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSArray *)pronunciations;
-(id)initWithToken:(id)arg1 pronunciations:(id)arg2 ;
-(TokenProns*)_quasarProns;
-(void)setPronunciations:(NSArray *)arg1 ;
@end

