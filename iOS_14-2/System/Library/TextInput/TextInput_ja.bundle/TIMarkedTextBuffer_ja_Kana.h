/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <libobjc.A.dylib/TIMarkedTextBuffer.h>

@class NSString;

@interface TIMarkedTextBuffer_ja_Kana : NSObject <TIMarkedTextBuffer> {

	long long _externalIndex;
	NSString* _externalString;

}

@property (nonatomic,readonly) NSString * internalString; 
@property (nonatomic,readonly) long long internalIndex; 
@property (nonatomic,readonly) NSString * externalString;              //@synthesize externalString=_externalString - In the implementation block
@property (assign,nonatomic) long long externalIndex;                  //@synthesize externalIndex=_externalIndex - In the implementation block
-(id)initWithInternalString:(id)arg1 ;
-(long long)internalIndex;
-(void)setInternalString:(id)arg1 withInputIndex:(long long)arg2 ;
-(NSString *)internalString;
-(long long)externalIndex;
-(void)deleteFromInput:(long long*)arg1 newInput:(id*)arg2 inputIndex:(long long*)arg3 ;
-(NSString *)externalString;
-(void)setExternalIndex:(long long)arg1 ;
@end

