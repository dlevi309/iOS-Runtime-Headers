/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INImage;


@protocol INKeyImageProducing <NSObject>
@property (readonly) INImage * _keyImage; 
@optional
-(BOOL)_isValidSubProducer:(id)arg1;

@required
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
-(INImage *)_keyImage;

@end

