/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSArray;

@interface CACSpokenCommandNounSpecifier : NSObject {

	unsigned _type;
	NSArray* _items;

}

@property (nonatomic,readonly) unsigned type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(id)description;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 items:(id)arg2 ;
-(id)initWithType:(unsigned)arg1 item:(id)arg2 ;
@end

