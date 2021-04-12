/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDPropertyAddress : NSObject <NSCopying> {

	AudioObjectPropertyAddress _audioObjectPropertyAddress;

}

@property (nonatomic,readonly) unsigned selector; 
@property (nonatomic,readonly) unsigned scope; 
@property (nonatomic,readonly) unsigned element; 
@property (nonatomic,readonly) AudioObjectPropertyAddress audioObjectPropertyAddress;              //@synthesize audioObjectPropertyAddress=_audioObjectPropertyAddress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)selector;
-(unsigned)element;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)scope;
-(id)initWithAddress:(AudioObjectPropertyAddress)arg1 ;
-(AudioObjectPropertyAddress)audioObjectPropertyAddress;
-(id)initWithSelector:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end

