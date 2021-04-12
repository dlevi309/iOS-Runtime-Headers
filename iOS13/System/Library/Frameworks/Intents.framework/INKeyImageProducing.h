/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INImage;


@protocol INKeyImageProducing <NSObject>
@property (readonly) INImage * _keyImage; 
@optional
-(BOOL)_isValidSubProducer:(id)arg1;

@required
-(INImage *)_keyImage;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;

@end

