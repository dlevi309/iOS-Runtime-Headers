/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DESpeakableString : NSObject {

	SpeakableString* _This;

}

@property (assign) SpeakableString* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * print; 
@property (retain) NSString * speak; 
-(SpeakableString*)This;
-(id)init;
-(id)initWithPrint:(id)arg1 speak:(id)arg2 ;
-(void)setPrint:(NSString *)arg1 ;
-(void)setSpeak:(NSString *)arg1 ;
-(NSString *)speak;
-(void)setThis:(SpeakableString*)arg1 ;
-(NSString *)print;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

