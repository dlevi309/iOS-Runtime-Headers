/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DESpeakableString : NSObject {

	SpeakableString* _This;

}

@property (assign) SpeakableString* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * print; 
@property (assign) NSString * speak; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)print;
-(NSString *)speak;
-(void)setSpeak:(NSString *)arg1 ;
-(void)setPrint:(NSString *)arg1 ;
-(void)setThis:(SpeakableString*)arg1 ;
-(SpeakableString*)This;
-(id)initWithPrint:(id)arg1 speak:(id)arg2 ;
@end

