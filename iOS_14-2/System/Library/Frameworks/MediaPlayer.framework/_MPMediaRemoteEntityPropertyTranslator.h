/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPEntityPropertyTranslator.h>

@class NSString;

@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {

	NSString* _keyPath;
	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,readonly) NSString * keyPath;                  //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)translatorWithKeyPath:(id)arg1 ;
+(id)translatorWithBlock:(/*^block*/id)arg1 ;
-(id)valueTransformBlock;
-(id)valueFromSource:(id)arg1 context:(id)arg2 ;
-(NSString *)keyPath;
@end

