/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRPhoneTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _phoneFile;
	unsigned char _maxPhoneNumLength;
	unsigned char _minPhoneNumLength;

}

@property (nonatomic,readonly) unsigned char minPhoneNumLength;              //@synthesize minPhoneNumLength=_minPhoneNumLength - In the implementation block
@property (nonatomic,readonly) unsigned char maxPhoneNumLength;              //@synthesize maxPhoneNumLength=_maxPhoneNumLength - In the implementation block
-(void)dealloc;
-(id)initWithFile:(id)arg1 ;
-(unsigned char)minPhoneNumLength;
-(unsigned char)maxPhoneNumLength;
-(BOOL)lookupPhoneNumber:(id)arg1 idResult:(unsigned*)arg2 ;
@end

