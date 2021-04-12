/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSString, NSSet;

@interface _EARWordPart : NSObject {

	NSString* _tagName;
	NSString* _orthography;
	long long _tag;
	unsigned long long _frequency;
	NSSet* _pronunciations;

}

@property (nonatomic,readonly) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) long long tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,readonly) unsigned long long frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) NSSet * pronunciations;                    //@synthesize pronunciations=_pronunciations - In the implementation block
-(unsigned long long)frequency;
-(NSString *)tagName;
-(long long)tag;
-(NSString *)orthography;
-(NSSet *)pronunciations;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3 ;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 ;
@end

