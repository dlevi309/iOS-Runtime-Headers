/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPEntityPropertyTranslator.h>

@class NSArray, NSString;

@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {

	NSArray* _sourceKeyPaths;
	/*^block*/id _valueTransformBlock;
	/*function pointer*/void* _valueTransformFunction;

}

@property (nonatomic,readonly) NSArray * sourceKeyPaths;                                      //@synthesize sourceKeyPaths=_sourceKeyPaths - In the implementation block
@property (nonatomic,readonly) id valueTransformBlock;                                        //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* valueTransformFunction;              //@synthesize valueTransformFunction=_valueTransformFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)translatorForKeyPaths:(id)arg1 valueTransformBlock:(/*^block*/id)arg2 ;
+(id)translatorForKeyPaths:(id)arg1 valueTransformFunction:(/*function pointer*/void*)arg2 ;
-(id)valueTransformBlock;
-(id)valueFromSource:(id)arg1 context:(id)arg2 ;
-(NSArray *)sourceKeyPaths;
-(/*function pointer*/void*)valueTransformFunction;
@end

