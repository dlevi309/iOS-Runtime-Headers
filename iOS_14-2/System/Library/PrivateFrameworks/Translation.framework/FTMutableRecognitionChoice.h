/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionChoice.h>

@class NSArray;

@interface FTMutableRecognitionChoice : FTRecognitionChoice

@property (nonatomic,copy) NSArray * alternative_index; 
@property (assign,nonatomic) int confidence; 
-(int)confidence;
-(id)init;
-(void)setAlternative_index:(NSArray *)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(NSArray *)alternative_index;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

